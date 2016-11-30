using UnityEngine;
using System.Collections;

public class CatchScript : MonoBehaviour {

    GameObject healthManager;
    GameObject scoreManager;
    Health healthScript;
    Score scoreScript;

	// Use this for initialization
	void Start ()
    {
        healthManager = GameObject.Find("Health Manager");
        if (healthManager != null)
        {
            healthScript = healthManager.GetComponent<Health>();
        }
        else
        {
            Debug.LogError("HEALTH MANAGER NOT FOUND!!!");
        }

        scoreManager = GameObject.Find("ScoreManager");
        if (scoreManager !=null)
        {
            scoreScript = scoreManager.GetComponent<Score>();
        }
        else
        {
            Debug.LogError("SCORE MANAGER NOT FOUND !!!!");
        }

        
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag == "GoodMicrobe")
        {
            //Add Score
            Destroy(coll.gameObject);
        }
        else if (coll.gameObject.tag == "BadMicrobe")
        {
            Destroy(coll.gameObject);
            healthScript.currentHealth--;

        }
    }
}
