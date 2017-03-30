using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class HandSwitch : MonoBehaviour {


    public List<Sprite> handSpritesWhite = new List<Sprite>();
	public List<Sprite> handSpriteBrown = new List<Sprite>();
	public List<Sprite> handSpriteBlack = new List<Sprite>(); 
	public List<Sprite> randomSprite = new List<Sprite>();
	private int random;
    public GameObject left;
    public GameObject right;
    public bool front = true;


    // Use this for initialization
    void Start () {

        front = true;

		SelectRandomHand ();

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
			left.GetComponent<SpriteRenderer>().sprite = randomSprite[0];
			right.GetComponent<SpriteRenderer>().sprite = randomSprite[1];

         

            
        }
        else
        {
			left.GetComponent<SpriteRenderer>().sprite = randomSprite[2];
			right.GetComponent<SpriteRenderer>().sprite = randomSprite[3];
          
        }
	
	}

	void SelectRandomHand()
	{
		random = Random.Range (0, 3);

		if (random == 0) 
		{
			randomSprite = handSpriteBlack;
		}
		else if (random == 1)
		{
			randomSprite = handSpritesWhite;
		}
		else if (random == 2)
		{
			randomSprite = handSpriteBrown;
		}
		
	}
}
