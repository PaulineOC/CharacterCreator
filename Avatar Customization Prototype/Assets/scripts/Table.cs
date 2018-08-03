using System.Collections;
using System.Collections.Generic;
//uses UI namespace
using UnityEngine.UI;
using UnityEngine;


public class Table : MonoBehaviour {

	private GameObject control;
	public List<Item> clothesList;


	public Transform contentPanel;
	//public Text selectedItem;
	public SimpleObjectPool buttonObjectPool;
	public SimpleObjectPool RowObjectPool;
	public GameObject col;



	// Use this for initialization
	void Start () {
		control = GameObject.Find ("Controller");
	}


	// Update is called once per frame
	void Update () {
		
	}


	public void AddButtons(List<Item> currList){
		int i = 0;
		GameObject thisRow = null;
		//goes through the list and finds out how many items we have,
		//add buttons as needed for each of the items
		//and then call the setup function in sampleButton 
		foreach (Item currItem in currList){
			//Debug.Log (currItem.itemName);
			if(i%2==0){
				//Debug.Log ("making column");
				GameObject newRow = RowObjectPool.GetObject ();
				newRow.transform.SetParent (contentPanel,false);

				thisRow = newRow;
			}
			GameObject newButton = buttonObjectPool.GetObject ();
			newButton.transform.SetParent (thisRow.transform,false);
			SampleButton sampleButton = newButton.GetComponent<SampleButton> ();
			sampleButton.Setup (currItem, this, this.control);
			i++;
		}
		//If there is a remainder
		if(i%2==1){
			GameObject newButton = buttonObjectPool.GetObject ();
			newButton.transform.SetParent (thisRow.transform,false);
			newButton.GetComponent<Button> ().enabled = false;
			foreach (Transform child in newButton.GetComponentsInChildren<Transform>()){
				if(child.gameObject != newButton){
					Destroy (child.gameObject);
				}
			}
			//newButton.Destroy (newButton.GetComponent<Image>);
			//newButton.GetComponent<Image> ().overrideSprite = blankButton;
		}


	}





}


