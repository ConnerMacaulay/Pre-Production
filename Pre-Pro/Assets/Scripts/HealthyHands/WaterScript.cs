using UnityEngine;
using System.Collections;

public class WaterScript : MonoBehaviour {

    GameObject handObj;
    GameObject healthManager;
    GameObject scoreManager;
    Score scoreScript;
    HealthyHandsSpawner healthyHandsScript;
    Health healthScript;
    Timer timerScript;
    float speed = 3.0f;
    public float deathTime = 1.0f;

    bool hitBound;
    bool hitBound2;
	// Use this for initialization
	void Start ()
    {
        handObj = GameObject.Find("Hand");
        scoreManager = GameObject.Find("ScoreManager");
        if (handObj != null)
        {
            healthyHandsScript = handObj.GetComponent<HealthyHandsSpawner>();
            timerScript = handObj.GetComponent<Timer>();
        }
        else
        {
            Debug.LogError("Hand object missing !!!");
        }

        if (scoreManager != null)
        {
            scoreScript = scoreManager.GetComponent<Score>();
        }
        else
        {
            Debug.LogError("Cant find score manager!!!");
        }



       



    }

    // Update is called once per frame
    void Update()
    {

        MoveSideToSide();
        
        
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        if(coll.gameObject.tag == "Bound")
        {
            hitBound = true;

        }
        if (coll.gameObject.tag == "Bound2")
        {
            hitBound2 = true;

        }
        else if (coll.gameObject.tag == "Clock")
        {
            Destroy(coll.gameObject);
            timerScript.AddTime(5.0f);
            coll = null;


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
    void MoveUpAndDown()
    {
        transform.Translate(transform.up * speed * Time.deltaTime);
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
                scoreScript.AddScore(2);
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
