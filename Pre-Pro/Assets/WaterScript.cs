using UnityEngine;
using System.Collections;

public class WaterScript : MonoBehaviour {

    GameObject handObj;
    HealthyHandsSpawner healthyHandsScript;
    float speed = 3.0f;

    bool hitBound;
	// Use this for initialization
	void Start ()
    {
        handObj = GameObject.Find("Hand");
        if (handObj != null)
        {
            healthyHandsScript = handObj.GetComponent<HealthyHandsSpawner>();
        }
        else
        {
            Debug.LogError("Hand object missing !!!");
        }
	    
	}
	
	// Update is called once per frame
	void Update ()
    {
        MoveSideToSide();
	}

    void OnTriggerEnter2D(Collider2D coll)
    {
        if(coll.gameObject.tag == "Bound")
        {
            hitBound = true;
        }

        if (coll.gameObject.tag == "BadMicrobe")
        {
            Destroy(coll.gameObject);
            healthyHandsScript.dMicrobes++;
        }
        else if (coll.gameObject.tag == "GoodMicrobe")
        {
            Destroy(coll.gameObject);

        }
    }

    void MoveSideToSide()
    {
        transform.Translate(transform.right * speed * Time.deltaTime);
        if (hitBound == true)
        {
            speed = -speed;
            hitBound = false;
        }
        
    }

    
}
