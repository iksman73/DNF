using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GetCoinEffect : MonoBehaviour {

	Vector3 destination = new Vector3(-480, 288,0);

	// Use this for initialization
	void Start () {
		Debug.Log("CREATE="+transform.localPosition);
	
	}
	
	// Update is called once per frame
	void Update () {

	
		transform.Translate(destination * Time.deltaTime * 5.0f);

		if (transform.localPosition.x <= destination.x)
		{
			Debug.Log("====>DELETE=" + transform.localPosition);
			Destroy(gameObject);
		}
	}
}
