﻿using UnityEngine;
using System.Collections;

public class WaterScript : MonoBehaviour {

	// Use this for initialization
	void Start ()
    {
	
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (coll.gameObject.tag == "BadMicrobe")
        {


        }
        else if (coll.gameObject.tag == "GoodMicrobe")
        {

        }
    }
}
