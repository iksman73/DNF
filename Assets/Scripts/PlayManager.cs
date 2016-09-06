using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayManager : MonoBehaviour {




	// game state =================
	enum GameState
	{
		READY,
		PLAY,
		GAMEOVER
	}

	private GameState gState;



	bool isEnd = false;

	bool isFeaver = false;



	// player variables ==============
	int getCoin;

	int combo;

	// combo level별 코인 가 치 
	int 			coinLevel;
	int[,] 		coinValue = {
									{1,20,0}, 	//[1]:value, [2]:up point, [3]:dn point
									{2,18,10}, 
									{5,15,9}, 
									{10,12,8},
									{50,10,7}, 
									{100,10,6}
								};

	const int 	coinValueMax = 5;



	// state UI =======================
	public GameObject panel_Ready;
	public GameObject panel_GameOver;
	public GameObject panel_Play;


	public GameObject getCoinEffectObj;

	// play UI ========================
	public Text text_distance;

	public Text text_getCoin;

	public Text text_combo;

	public Text text_FPS;


	// player =================
	public GameObject 	player;		//player prefab
	private Animator 	playerAnim;	//player Animation
	private Rigidbody 	playerRig;	//player RigidBody

	public float playerSpeed 	= 16;	//player forward speed (z- axis)
	public float playerUpForce = 130;   //player UpForce (y-axis)
	Vector3 forwardVelocity;			//rigidBody forward Speed (바 닥 걷 기 시   speed 유 지 를 위 해 )

	bool isUp = false;				//player up&down state




	// about camera =================
	public float cameraDampX = 0.9f;
	public float cameraDampY = 0.9f;
	public float cameraDistance = -2.0f;




	// about manage =====================
	public GameObject mapManager;








	// Setting game state & UI
	void SetState(GameState state)
	{

		gState = state;

		panel_Ready.SetActive(false);
		panel_GameOver.SetActive(false);

	}





	// Use this for initialization
	void Start () {



		playerRig = player.GetComponent<Rigidbody>();                   //get player rigidbody
		playerAnim = player.GetComponentInChildren<Animator>(); //get player animation

		Ready();

	}






	//
	void Ready()
	{
		deltaTime = 0.0f;


		Time.timeScale = 0;

		SetState(GameState.READY);


		//Camera Initialize
		Camera.main.transform.position = new Vector3(0, 0, -6); //init main camera position


		//Player Initialize
		player.transform.position = Vector3.zero;

		getCoin = 0;
		text_getCoin.text = "0";

		combo = 0;
		text_combo.text = "combo x 0";


		coinLevel = 0;

		isEnd = false;

		isUp = false;

		playerAnim.SetBool("isUp", isUp);	//Init animation to idle state
		playerRig.Sleep();  //Physics effect Init


		//Map Initialize
		mapManager.SendMessage("ResetMap");


		//Set Ready Panel
		panel_Ready.SetActive(true);

		UpdateCameraPosition();


	}




	// 플 레 이 시 작  처리
	void StartPlay()
	{
		
		SetState(GameState.PLAY);
		Application.targetFrameRate = 30;
	
		Time.timeScale = 1;

		playerRig.velocity = Vector3.forward * playerSpeed;

		forwardVelocity = playerRig.velocity;

	}





	//Game Over 처 리
	void GameOver()
	{
		Time.timeScale = 0;

		isEnd = true;

		SetState(GameState.GAMEOVER);
		panel_GameOver.SetActive(true);

	}





	float deltaTime=0;



	// Update is called once per frame
	void Update () {


		switch (gState)
		{
			case GameState.READY:
				if (Input.GetMouseButtonDown(0)) StartPlay();
				break;

			case GameState.PLAY:

				// Feaver Test 
				//if (Input.GetKeyDown(KeyCode.Space))
				//{
				//	if (isFeaver)
				//	{
				//		playerSpeed = 15;
				//		isFeaver = false;
				//	}
				//	else {
				//		playerSpeed = 60;
				//		isFeaver = true;
				//	}
				//	rig.velocity = Vector3.forward * speed;

				//}


				if (Input.GetMouseButtonDown(0))
				{



					//	playerRig.AddForce(Vector3.up * playerUpForce);
					//playerRig.AddForce(Vector3.up * Mathf.Abs(playerRig.velocity.y * 3.0f));

					playerRig.velocity = new Vector3(playerRig.velocity.x, playerRig.velocity.y * 0.5f, playerRig.velocity.z);


					isUp = true;
					playerAnim.SetBool("isUp", isUp);


				}
				else if (Input.GetMouseButtonUp(0))
				{
						playerRig.AddForce(Vector3.up * (-playerRig.velocity.y));
					//playerRig.velocity = new Vector3(playerRig.velocity.x, 0, playerRig.velocity.z);

					isUp = false;
					playerAnim.SetBool("isUp", isUp);


				}



				break;

			case GameState.GAMEOVER:

				if (Input.GetMouseButtonDown(0)) Ready();

				break;
		}


		//if (!isUp && duckAnim.GetBool("isUp") ) duckAnim.SetBool("isUp", false);




		/// <summary>
		/// FPS
		/// float deltaTime = 0.0f;

		deltaTime += (Time.deltaTime - deltaTime) * 0.1f;

		float msec = deltaTime * 1000.0f;
		float fps = 1.0f / deltaTime;

		text_FPS.text = string.Format("{0:0.0} ms ({1:0.} fps)", msec, fps);

		/// </summary>


	}






	void FixedUpdate()
	{

		//Set Virtical move
		if (isUp)
			playerRig.AddForce(Vector3.up * (playerUpForce - Mathf.Min(playerUpForce, playerRig.velocity.y * 2)));
		else
			//playerRig.AddForce(Vector3.up * (-playerUpForce / 3));

			playerRig.velocity += Vector3.up * -0.9f;




		//Set Horizontal move
		player.transform.position += new Vector3(Input.acceleration.x, 0, 0);			// Tilt  (phone)
		player.transform.position += new Vector3(Input.GetAxis("Horizontal")/2, 0, 0);	// Key   (pc)


		//Set Camera move
		UpdateCameraPosition();


		//Play UI
		text_distance.text = Mathf.Floor(player.transform.position.z).ToString() + " m";  //move distance
																				

	}


	// Camera follow Player smoothly
	void UpdateCameraPosition()
	{

		Camera.main.transform.position = new Vector3(Mathf.Lerp(Camera.main.transform.position.x, player.transform.position.x, cameraDampX),
		                                             Mathf.Lerp(Camera.main.transform.position.y, player.transform.position.y, cameraDampY),
		                                             player.transform.position.z + cameraDistance);

		Camera.main.transform.LookAt(player.transform);

	}



	// Call when player Crach with Object
	public void playerCrash(GameObject colObj)
	{
		//충 돌 바 닥 에 는 friction 0인 physics material 넣 어 줘 야 함 .

		if(colObj.tag!="wall_Floor")		GameOver ();
		else playerRig.velocity = forwardVelocity;

	}



	//Coin 획 득 시 처 리 
	void playerGetCoin()
	{
		getCoin+=coinValue[coinLevel,0];
		text_getCoin.text = getCoin.ToString();


		combo++;

		if(combo > 1)
			text_combo.text = "COMBO x " + (combo-1).ToString();





		GameObject go = (GameObject)Instantiate(getCoinEffectObj, player.transform.localPosition, Quaternion.identity);
		go.transform.parent = panel_Play.transform;
		 
		go.transform.localPosition = Camera.main.WorldToViewportPoint(player.transform.position);







	}




	//Fail Combo
	void ResetCombo()
	{
		combo = 0;
		text_combo.text = "COMBO x 0";

	}



}
