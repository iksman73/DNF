using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class Player : MonoBehaviour {


	public GameObject playManager;




	void getCoin()
	{

		playManager.SendMessage("playerGetCoin");
	}




	void OnCollisionEnter(Collision col)
	{
		
		playManager.SendMessage("playerCrash", col.gameObject);

	}




}


