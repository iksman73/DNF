using UnityEngine;
using System.Collections;

public class Coin : MonoBehaviour {


	public bool isCatched = false;


	void Start()
	{
	//	ResetCoin(false);
	}



	void OnTriggerEnter(Collider other)
	{
		isCatched = true;

		if(other.gameObject.tag == "Player")
			other.gameObject.SendMessage("getCoin");
	}


	//Init coin state & local Position when block move to last Position
	public void ResetCoin(bool isOut)
	{
		gameObject.SetActive(isOut);

		isCatched = false;
		transform.localPosition = Vector3.zero;
	}


	void Update()
	{
		if (isCatched)
		{
			gameObject.SetActive(false);
			transform.Translate((Vector3.up + Vector3.left + Vector3.forward) * Time.deltaTime * 70.0f);
		}

	}

}
