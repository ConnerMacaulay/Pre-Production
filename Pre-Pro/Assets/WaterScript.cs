using UnityEngine;
using System.Collections;

public class WaterScript : MonoBehaviour {

    GameObject handObj;
    GameObject healthManager;
    HealthyHandsSpawner healthyHandsScript;
    Health healthScript;

    float speed = 3.0f;
    public float deathTime = 1.0f;

    bool hitBound;
	// Use this for initialization
	void Start ()
    {
        handObj = GameObject.Find("Hand");
        healthManager = GameObject.Find("Health Manager");

        if (handObj != null)
        {
            healthyHandsScript = handObj.GetComponent<HealthyHandsSpawner>();
        }
        else
        {
            Debug.LogError("Hand object missing !!!");
        }

        if (healthManager != null)
        {
            healthScript = healthManager.GetComponent<Health>();
        }
        else
        {
            Debug.LogError("HEALTH MANAGER NOT FOUND!!!");
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

        StartCoroutine(DestroyMicrobe(coll));

       
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

    IEnumerator DestroyMicrobe(Collider2D coll)
    {
        yield return new WaitForSeconds(deathTime);
        if (coll.gameObject != null)
        {
            if (coll.gameObject.tag == "BadMicrobe")
            {
                Destroy(coll.gameObject);
                coll = null;
                healthyHandsScript.dMicrobes++;
                

            }
            else if (coll.gameObject.tag == "GoodMicrobe")
            {
                Destroy(coll.gameObject);
                coll = null;

                healthScript.currentHealth--;


            }
        }

    }
    

    

    
}
