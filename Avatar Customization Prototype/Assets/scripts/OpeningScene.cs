using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpeningScene : MonoBehaviour {

	// Use this for initialization
	void Start () {

		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void toggleNextScene(){
		PrototypeData.SetAllLists();
		PrototypeData.mode = 1;
		PrototypeData.category = 1;
		Application.LoadLevel ("DesignYourCharacter");



	
	
	}
}
