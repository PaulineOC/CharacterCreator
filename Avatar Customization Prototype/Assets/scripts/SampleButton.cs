using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class SampleButton : MonoBehaviour {
	public Button button;
	//public Text nameLabel;
	public Image iconImage;
	private Item item;
	private Table table;
	private GameObject control;
	private bool itemHasBeenSet;
	// Use this for initialization
	void Start () {
		this.itemHasBeenSet = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
		
	public void Setup(Item currItem, Table currTable, GameObject controller){
		item = currItem;
		iconImage.sprite = currItem.icon;
		table = currTable;
		this.control = controller;
	}

	public void handleClick(){
		//Debug.Log (this.item.category);
		//Debug.Log (this.item.itemName);
		control.GetComponent<SceneController>().setItem(this.gameObject,this.item);
	}
}



