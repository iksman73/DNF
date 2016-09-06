using UnityEngine;
using System.Collections;

public class Block : MonoBehaviour {


	GameObject playerObj;

	GameObject parentObj;

	public GameObject Coin;


	public Material[] blockMaterial;


	int materialType = 0;


	// Use this for initialization
	void Start () {

		playerObj = GameObject.Find ("Player");
		parentObj = GameObject.Find ("Map");

	}




	// Update is called once per frame
	void Update () {

		if (transform.position.z < (playerObj.transform.position.z - 10))
		{
			parentObj.SendMessage("setLastBlock", gameObject);	//Move Last Position
		}


		if (Coin.activeSelf)
		{
			if (Coin.transform.position.z < playerObj.transform.position.z)
			{
				if(Coin.GetComponent<Coin>().isCatched == false)
					parentObj.SendMessage("coinMiss");
			}
		}


	}


	//Call when Restart Play.
	void InitBlock()
	{
		materialType = 0;
		SetCoin(false);

		ChangeMaterial();
	}


	void SetCoin(bool isCoin)
	{
		Coin.GetComponent<Coin>().ResetCoin(isCoin);

		if (isCoin) Coin.transform.localPosition = new Vector3(Random.Range(-4, 5), Random.Range(-5, 6), 2.5f);

	}




	void ChangeMaterial()
	{



		MeshRenderer[] tempRenderers = gameObject.GetComponentsInChildren<MeshRenderer>();



		foreach (MeshRenderer child in tempRenderers)
		{
			
			if(child.name == "wQuad")
				child.material = blockMaterial[materialType%(blockMaterial.Length)];
		}

		materialType++;

	}
}
