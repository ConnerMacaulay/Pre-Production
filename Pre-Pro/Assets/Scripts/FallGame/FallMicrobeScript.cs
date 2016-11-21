using UnityEngine;
using System.Collections;

public class FallMicrobeScript : MonoBehaviour {


    float lifetime = 2.5f;
    GameObject healthManager;
    Health healthScript;
	// Use this for initialization
	void Start ()
    {
        healthManager = GameObject.Find("Health Manager");
        if (healthManager!=null)
        {
            healthScript = healthManager.GetComponent<Health>();
        }
        else
        {
            Debug.LogError("Cant find health manage!!!!!");
        }
	}
	
	// Update is called once per frame
	void Update ()
    {
	    if (lifetime > 0)
        {
            lifetime -= Time.deltaTime;
        }
        else
        {
            Destroy(this.gameObject);

            if (gameObject.tag == "GoodMicrobe")
            {
                healthScript.currentHealth--;
            }
        }
	}
}
