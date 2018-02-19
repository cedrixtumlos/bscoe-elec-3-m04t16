using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class Splash : MonoBehaviour {

	public RawImage logo;
	public string loadLevel;

	/*void awake(){
		DontDestroyOnLoad (gameObject);
	}*/
	void awake(){
		DontDestroyOnLoad (gameObject);
	}

	// Use this for initialization
	IEnumerator Start () {
		logo.canvasRenderer.SetAlpha (0.0f);
		//proj.canvasRenderer.SetAlpha (0.0f);
		fadeIn ();
		yield return new WaitForSeconds (2.5f);
		fadeOut ();
		yield return new WaitForSeconds (2.5f);
		/*	fadeIn1 ();
		yield return new WaitForSeconds (2.5f);
		fadeOut2 ();
		yield return new WaitForSeconds (2.5f);
		//Invoke ("LoadGameScene", 2f);*/
	}

	// Update is called once per frame
	void Update () {

	}
	void fadeIn(){
		logo.CrossFadeAlpha (1.0f,1.5f,false);
	}
	void fadeOut(){
		logo.CrossFadeAlpha (0.0f,2.5f,false);
	}
	/*	void fadeIn1(){
		proj.CrossFadeAlpha (1.0f,1.5f,false);
	}
	void fadeOut2(){
		proj.CrossFadeAlpha (0.0f,2.5f,false);

	}*/


	/*void LoadGameScene(){
	SceneManager.LoadScene ("M4T16");
}*/
}
