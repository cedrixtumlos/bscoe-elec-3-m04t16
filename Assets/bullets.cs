using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bullets : MonoBehaviour {
	public ParticleSystem explosion;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	IEnumerator OnParticleCollision (GameObject other){

		Debug.Log("PArticle Hit");
		explosion.Play ();
		yield return new WaitForSeconds (1f);
		Destroy (gameObject);
	
	}
}	
