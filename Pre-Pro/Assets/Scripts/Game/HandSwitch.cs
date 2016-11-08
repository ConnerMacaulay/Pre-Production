using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class HandSwitch : MonoBehaviour {


    public List<Sprite> handSprites = new List<Sprite>();
    public GameObject left;
    public GameObject right;
    public bool front;
	// Use this for initialization
	void Start () {
        front = true;


	
	}
	
    public void SwitchHands()
    {
        if (front == true)
        {
            front = false;
        }
        else
        {
            front = true;
        }
    }
	// Update is called once per frame
	void Update () {

        if (front == true)
        {
            left.GetComponent<SpriteRenderer>().sprite = handSprites[0];
            right.GetComponent<SpriteRenderer>().sprite = handSprites[1];

            
        }
        else
        {
            left.GetComponent<SpriteRenderer>().sprite = handSprites[2];
            right.GetComponent<SpriteRenderer>().sprite = handSprites[3];
        }
	
	}
}
