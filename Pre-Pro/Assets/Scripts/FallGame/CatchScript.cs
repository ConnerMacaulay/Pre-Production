using UnityEngine;
using System.Collections;

public class CatchScript : MonoBehaviour {

    GameObject healthManager;
    GameObject scoreManager;
    Health healthScript;
    Score scoreScript;

	private AudioSource goodCatchSource;
	public AudioClip[] goodMicrobeCatch;
	private AudioClip goodCatchClip;

	private AudioSource badMicrobeHit;
	public AudioClip badMicrobe;

	// Use this for initialization
	void Start ()
    {
		goodCatchSource = GetComponent<AudioSource>();
		badMicrobeHit = GetComponent<AudioSource>();

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
	void Update ()
    {
	
	}

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag == "GoodMicrobe")
        {
            //Add Score
			RandomGoodMicrobeCatch();
            scoreScript.AddScore(5);
            Destroy(coll.gameObject);

        }
        else if (coll.gameObject.tag == "BadMicrobe")
        {
			badMicrobeHit.PlayOneShot (badMicrobe, 0.75f);
            Destroy(coll.gameObject);
            scoreScript.AddScore(-5);
            healthScript.currentHealth--;

        }
    }

	void RandomGoodMicrobeCatch()
	{
		int random = Random.Range (0, goodMicrobeCatch.Length);
		goodCatchClip = goodMicrobeCatch [random];
		goodCatchSource.clip = goodCatchClip;
		goodCatchSource.Play ();
	}
}
