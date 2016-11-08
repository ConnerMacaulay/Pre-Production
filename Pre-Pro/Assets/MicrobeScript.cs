using UnityEngine;
using System.Collections;

public class MicrobeScript : MonoBehaviour {


    bool frontMicrobe;
    HandSwitch handSwitch;
	// Use this for initialization
	void Awake () {

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

    }


	
	// Update is called once per frame
	void Update ()
    {
        if (handSwitch.front == true)
        {
            if (frontMicrobe)
            {
                this.gameObject.SetActive(true);
            }
            else
            {
                this.gameObject.SetActive(false);
            }
        }
        else if (handSwitch.front == false)
        {
            if (frontMicrobe)
            {
                this.gameObject.SetActive(false);
            }
            else
            {
                this.gameObject.SetActive(true);

            }
        }
	
	}
}
