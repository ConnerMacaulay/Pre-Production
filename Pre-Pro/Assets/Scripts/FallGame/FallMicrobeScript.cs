using UnityEngine;
using System.Collections;

public class FallMicrobeScript : MonoBehaviour {

	private AudioSource missedGoodMicrobe;
	public AudioClip missedGoodClip;

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

		missedGoodMicrobe = GetComponent<AudioSource>();
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
				missedGoodMicrobe.PlayOneShot (missedGoodClip, 0.70f);
                healthScript.currentHealth--;
            }
        }
	}
}
