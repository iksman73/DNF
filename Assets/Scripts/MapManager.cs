using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MapManager : MonoBehaviour {



	public GameObject playManager;

	public int blockZ = 6;
	public float blockXY = 6;
	public int maxBlock = 10;

	int nowStep = 0;



	int coinCount = 0;


	Vector3 lastPosition;	//이 전 블록 의 위 치
	Vector3 newPosition;    //새로 생 성 될 위 치

	List<GameObject> mapBlockList = new List<GameObject>();

	public GameObject[] blockPrefab;







	// Use this for initialization
	void Awake () {

		for (int i = 0; i < maxBlock; i++) {

			lastPosition = new Vector3 (0, 0, i * blockZ);

			mapBlockList.Add((GameObject)Instantiate (blockPrefab[i%2], lastPosition, Quaternion.identity));


	

		}

	}
	


	void ResetMap()
	{
		
		int zPos = -blockZ;

		coinCount = 0;

		nowStep = 0;

		foreach (GameObject go in mapBlockList)
		{
			go.transform.position = new Vector3(0, 0, zPos);
			go.SendMessage("InitBlock");


			zPos += blockZ;
		}

		if (mapBlockList.Count > 0)
		{
			lastPosition = mapBlockList[mapBlockList.Count - 1].transform.position;
		}
	}



	int matChangeCount = 0;

	int verticalChangeRate = 10;

	bool isUp = true;


	bool isFeaver = false;






	void setLastBlock(GameObject block)
	{


		//		lastPosition += new Vector3 (Random.Range (-3, 3),Random.Range (-3, 3),5);	



		//난 이 도 설 정 
		if (Random.Range(0, 100) < verticalChangeRate)
		{
			isUp = !isUp;
			verticalChangeRate = 0;
		}

		verticalChangeRate += Random.Range(0,50);




		//	lastPosition += new Vector3(Random.Range(-5, 5), Random.Range(-5, 5), blockZ);

	

		float dx=0, dy=0;



		if (!isFeaver)
		{

			dx = Random.Range(-5, 6);
			dy = Random.Range(1, 7) * (isUp ? -1 : 1);

		}


		lastPosition += new Vector3(dx, dy, blockZ);

		block.transform.position = lastPosition;



		//test용 == 일 정 거 리 마 다 맵 변 경 처 리 ========================
		if (block.transform.position.z / 100 > nowStep)
		{
			nowStep++;
	//		Debug.Log("now Step = " + nowStep);
			matChangeCount = maxBlock;
		}


		if (matChangeCount-- > 0)
		{
			block.SendMessage("ChangeMaterial");
		}




		// Coin처

	



		if (coinCount == 2 || isFeaver)
		{
			block.SendMessage("SetCoin",true);
			coinCount = 0;
		}
		else {
			block.SendMessage("SetCoin", false);
			coinCount++;
		}


	}




	void coinMiss()
	{
	//	Debug.Log("coin Miss");
		playManager.SendMessage("ResetCombo");
	}




}
