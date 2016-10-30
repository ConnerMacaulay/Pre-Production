using UnityEngine;
using System.Collections;

public class Spawning : MonoBehaviour {

    public float range = 10f;
    public GameObject microbe;
    public int noMicrobes;
    public int setMicrobes;
    public int dMicrobes = 0;
    public int killScore = 10;

    Score scoreScript;

    private AudioSource bubbleSound;
    public AudioClip bubble;

    // Use this for initialization
    void Start () {

        bubbleSound = GetComponent<AudioSource>();

        setMicrobes = noMicrobes;

        GameObject managerObj = GameObject.Find("Manager");

        if (managerObj != null)
        {
            scoreScript = managerObj.GetComponent<Score>();

        }
    }
	
	// Update is called once per frame
	void Update ()
    {
        //Click and destroy objects
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                BoxCollider bc = hit.collider as BoxCollider;
                if (bc != null)
                {
                    Destroy(bc.gameObject);
                    dMicrobes += 1;
                    scoreScript.AddScore(killScore);
                    bubbleSound.PlayOneShot(bubble, 0.8f);
                    Debug.Log("Hit");
                }
            }
        }
        //Checks if all the microbes have been spawned
        if (noMicrobes > 0)
        {
            Spawn();
            noMicrobes -= 1;
        }

        if (dMicrobes == 5)
        {
            dMicrobes = 0;
            noMicrobes = 5;
        }
        //Respawns microbes
        if (Input.GetMouseButtonDown(1))
        {
            Debug.Log("Reset");
            noMicrobes = 5;
        }
    }
    //Creates a random spawn point for the microbes
    private void Spawn()
    {
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
       
        Instantiate(microbe, transform.position + randomPos, Quaternion.identity);
    }
}
