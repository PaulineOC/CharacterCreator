using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public static class PrototypeData {
	public static int mode;
	public static int category;


	//Facial Features
	public static List<Item> eyes;
	public static List<Item> eyebrows;
	public static List<Item> noses;
	public static List<Item> mouths;
	public static List<Item> hair;
	public static List<Item> skin;

	//Clothing
	public static List<Item> hats;
	public static List<Item> tops;
	public static List<Item> pants;
	public static List<Item> shoes;
	public static List<Item> accessories;
	public static List<Item> fullOutfits;

	public static void SetAllLists(){
		eyes = new List<Item>();
		createIndividualList("Eyes",eyes);
		eyebrows = new List<Item>();
		createIndividualList ("Eyebrows", eyebrows);
		noses = new List<Item>();
		createIndividualList ("Noses",noses);
		mouths = new List<Item>();
		createIndividualList ("Mouths",mouths);
		hair = new List<Item>();
		createIndividualList("Hair", hair);

		skin = new List<Item> ();



		//Clothing
		hats = new List<Item>();
		createIndividualList ("Hats", hats);
		tops = new List<Item>();
		createIndividualList ("Tops", tops);
		pants = new List<Item>();
		createIndividualList ("Pants", pants);
		shoes = new List<Item> ();
		createIndividualList ("Shoes", shoes);
		accessories = new List<Item>();
		createIndividualList ("Accessories", accessories);
		fullOutfits = new List<Item>();
		createIndividualList ("FullOutfits", fullOutfits);
	}

		
	public static void createIndividualList(string name, List<Item> currList){	
		Sprite[] allItems = Resources.LoadAll(name, typeof(Sprite)).Cast<Sprite>().ToArray();
		foreach(var s in allItems){
			//Create Item
			string tmpName = s.name.Split('.')[0];

			Item tempItem = new Item (tmpName, name,s, Time.time);
			///add item to list
			currList.Add(tempItem);
		}
	}



}

[System.Serializable]
public class Item{

	public string itemName;
	public string category;
	public Sprite icon;
	public float whenAdded;
	public List<Color> options;

	public Item(string name, string cat, Sprite pic, float time ){
		options = new List<Color> ();
		this.itemName = name;
		this.category = cat;
		this.icon = pic;
		this.whenAdded = time;
	}

}




