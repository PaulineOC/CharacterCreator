using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class SceneController : MonoBehaviour {
	//Player objects
	public GameObject playerFace;
	public GameObject playerFaceBase;
	public GameObject playerBody;
	public GameObject playerBodyBase;

	public SimpleObjectPool RowObjectPool1;
	public SimpleObjectPool buttonObjectPool1;

	//Table Content 
	public GameObject content;
	public GameObject viewport;
	public GameObject categoryHeader;
	public GameObject buttons;
	private Sprite[] allIcons;
	//Mode: 1 = face change; 2 = clothing change
	public int mode;

	//For Item Setting:

	//Current Facial Items
	public  List<Item> currentFace= new List<Item>();
	//Current Clothing Items
	public  List<Item> currentClothes = new List<Item>();

	void Awake(){
		PrototypeData.SetAllLists();
		PrototypeData.mode = 1;
		PrototypeData.category = 1;
		categoryHeader.GetComponent<Text>().text= "Select a feature to edit";

		allIcons = Resources.LoadAll("Headericons", typeof(Sprite)).Cast<Sprite>().ToArray();

	}

	// Use this for initialization
	void Start () {
		if(PrototypeData.mode==1){
			setCatButtons ();
			content.GetComponent<Table>().AddButtons(PrototypeData.eyes);
			//Start with face
			foreach (Transform child in playerBody.GetComponentInChildren<Transform>()) {
				if(child.gameObject!=playerBody && child.gameObject.GetComponent<SpriteRenderer> () ){
					child.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
				}
			}
			playerBodyBase.GetComponent< SpriteRenderer >().enabled = false;
			playerFaceBase.GetComponent< SpriteRenderer >().enabled = true;
		}
	}

	
	// Update is called once per frame
	void Update () {
		
	}

	public void setItem(GameObject clickedButton, Item buttonItem){
		string cat = buttonItem.category;

		//check if there is any other category 
		if(PrototypeData.mode==1){
			//Set features for face 
			foreach (Transform child in playerFace.GetComponentInChildren<Transform>()) {
				if (child.gameObject.name == cat ) {
					child.gameObject.GetComponent<SpriteRenderer> ().sprite = buttonItem.icon;
				}
			}

			//Set features for body
			foreach (Transform child in playerBody.GetComponentInChildren<Transform>()) {
				if (child.gameObject.name == cat) {
					child.gameObject.GetComponent<SpriteRenderer> ().sprite = buttonItem.icon;
				}

			}
		}
		else if(PrototypeData.mode==2){
			foreach (Transform child in playerBody.GetComponentInChildren<Transform>()) {
				//Debug.Log (child.gameObject.name);
				//Debug.Log (cat);
				if (child.gameObject.name == cat ) {
					child.gameObject.GetComponent<SpriteRenderer> ().sprite = buttonItem.icon;
				}
			}


		}

	}


	public void resetList(){
		foreach (Transform child in content.GetComponentInChildren<Transform>()) {
			if (child.gameObject != content.gameObject) {
				Destroy (child.gameObject);
			}
		}
	}

	public void changeModes(int num){
		if (PrototypeData.mode != num) {
			PrototypeData.mode = num;
			PrototypeData.category = 1;
			resetList ();
			setCatButtons();
			if(num==1){//Facial Features
				content.GetComponent<Table> ().AddButtons (PrototypeData.eyes);
				categoryHeader.GetComponent<Text>().text= "Eyes";
				playerFaceBase.GetComponent< SpriteRenderer >().enabled = true;
				foreach (Transform child in playerFace.GetComponentInChildren<Transform>()) {
					if(child.gameObject!=playerFace && child.gameObject.GetComponent<SpriteRenderer> () ){
						child.gameObject.GetComponent<SpriteRenderer> ().enabled = true;
					}
				}
				//Turns components in body off
				playerBodyBase.GetComponent< SpriteRenderer >().enabled = false;
				foreach (Transform child in playerBody.GetComponentInChildren<Transform>()) {
					if(child.gameObject!=playerBody && child.gameObject.GetComponent<SpriteRenderer> () ){
						child.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
					}
				}

			}
			else if(num==2){
				content.GetComponent<Table> ().AddButtons (PrototypeData.hats);
				categoryHeader.GetComponent<Text>().text= "Hats";
				playerFaceBase.GetComponent< SpriteRenderer >().enabled = false;
				foreach (Transform child in playerFace.GetComponentInChildren<Transform>()) {
					if(child.gameObject!=playerFace && child.gameObject.GetComponent<SpriteRenderer> () ){
						child.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
					}
				}
				playerBodyBase.GetComponent< SpriteRenderer >().enabled = true;
				foreach (Transform child in playerBody.GetComponentInChildren<Transform>()) {
					if(child.gameObject!=playerBody && child.gameObject.GetComponent<SpriteRenderer> () ){
						child.gameObject.GetComponent<SpriteRenderer> ().enabled = true;
					}
				}

			}
		} else {
			Debug.Log ("same mode");
		}
	
	
	}
	public void catButtonPressed(int num){
		//Debug.Log (num);
		if (num != PrototypeData.category) {
			PrototypeData.category = num;
			//Remove previous list items
			resetList();
			if(PrototypeData.mode==1){
				switch(num){
				case 1:
					content.GetComponent<Table> ().AddButtons (PrototypeData.eyes);
					categoryHeader.GetComponent<Text>().text= "Eyes";
					break;
				case 2:	
					content.GetComponent<Table> ().AddButtons (PrototypeData.eyebrows);
					categoryHeader.GetComponent<Text>().text= "Eyebrows";
					break;
				case 3:
					content.GetComponent<Table> ().AddButtons (PrototypeData.noses);
					categoryHeader.GetComponent<Text>().text= "Noses";
					break;
				case 4:
					content.GetComponent<Table> ().AddButtons (PrototypeData.mouths);
					categoryHeader.GetComponent<Text>().text= "Mouths";
					break;
				case 5:
					content.GetComponent<Table> ().AddButtons (PrototypeData.hair);
					categoryHeader.GetComponent<Text>().text= "Hair";
					break;

				}
			}
			else if(PrototypeData.mode==2){
				switch(num){
				case 1:
					content.GetComponent<Table> ().AddButtons (PrototypeData.hats);
					categoryHeader.GetComponent<Text>().text= "Hats";
					break;

				case 2:
					content.GetComponent<Table> ().AddButtons (PrototypeData.tops);
					categoryHeader.GetComponent<Text>().text= "Tops";
					break;
				case 3:
					content.GetComponent<Table> ().AddButtons (PrototypeData.pants);
					categoryHeader.GetComponent<Text>().text= "Bottoms";
					break;
				case 4:
					content.GetComponent<Table> ().AddButtons (PrototypeData.shoes);
					categoryHeader.GetComponent<Text>().text= "Shoes";
					break;
				case 5:
					content.GetComponent<Table> ().AddButtons (PrototypeData.accessories);
					categoryHeader.GetComponent<Text>().text= "Accessories";
					break;
				}
			}

		} else {
			Debug.Log ("already pressed");
		}
		//Debug.Log (PrototypeData.eyebrows);
	}

	private void setCatButtons(){
		//Faces
		Transform[] childrenList = buttons.GetComponentsInChildren<Transform>();

		if (PrototypeData.mode == 1) {
			childrenList[1].gameObject.GetComponent<Image>().sprite = allIcons[0];
			childrenList[2].gameObject.GetComponent<Image>().sprite = allIcons[1];
			childrenList[3].gameObject.GetComponent<Image>().sprite = allIcons[2];
			childrenList[4].gameObject.GetComponent<Image>().sprite = allIcons[3];
			childrenList[5].gameObject.GetComponent<Image>().sprite = allIcons[4];
		}
		//Body
		else{
			childrenList[1].gameObject.GetComponent<Image>().sprite = allIcons[5];
			childrenList[2].gameObject.GetComponent<Image>().sprite = allIcons[6];
			childrenList[3].gameObject.GetComponent<Image>().sprite = allIcons[7];
			childrenList[4].gameObject.GetComponent<Image>().sprite = allIcons[8];
			childrenList[5].gameObject.GetComponent<Image>().sprite = allIcons[9];
		}

	}
		
		
}
