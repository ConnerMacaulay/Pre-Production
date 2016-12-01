using UnityEngine;
using System.Collections;

public class MicrobeScript : MonoBehaviour {


    public bool frontMicrobe;
    HandSwitch handSwitch;
	// Use this for initialization
	void Awake() {

     
            handSwitch = GameObject.Find("Hands").GetComponent<HandSwitch>();
            if (handSwitch == null)
            {
                Debug.LogError("CANT FIND HANDS SCRIPT!!!");
            }

            int randomChance = Random.Range(-1, 1);

            if (randomChance == 0)
            {
                frontMicrobe = false;
            }
            else
            {
                frontMicrobe = true;
            }


            if (frontMicrobe)
            {
                if (handSwitch.front == true)
                {
                    EnableComponents();
                }
                else
                {
                    DisableComponents();
                }
            }
            else
            {
                if (handSwitch.front == true)
                {
                    DisableComponents();
                }
                else
                {
                    EnableComponents();
                }
            }
        

       
    }


    void Update ()
    {
        
            handSwitch = GameObject.Find("Hands").GetComponent<HandSwitch>();

            if (handSwitch.front == true)
            {
                if (frontMicrobe)
                {
                    EnableComponents();

                }
                else
                {
                    DisableComponents();
                }
            }
            else if (handSwitch.front != true)
            {
                if (frontMicrobe)
                {
                    DisableComponents();

                }
                else
                {
                    EnableComponents();
                }
            }
	}


    void EnableComponents()
    {
        GetComponent<SpriteRenderer>().enabled = true;
        GetComponent<BoxCollider2D>().enabled = true;
    }
    void DisableComponents()
    {
        GetComponent<SpriteRenderer>().enabled = false;
        GetComponent<BoxCollider2D>().enabled = false;
    }
}
