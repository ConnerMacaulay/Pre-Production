using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class FallSpawn : MonoBehaviour {


    public List<GameObject> spawns = new List<GameObject>();
    public GameObject goodMicrobe;
    public GameObject badMicrobe;
    GameObject nextMicrobe;

    int wave;
    int microbesAmount;
    float waveDelay;

    float spawnDelay;


	// Use this for initialization
	void Start () 
    {
        waveDelay = 2.0f;
        spawnDelay = 1.0f;
        microbesAmount = 3;
        wave = 0;
        StartCoroutine(WaitAndSpawn());

    }

    // Update is called once per frame
    void Update () 
    {

	}

    IEnumerator WaitAndSpawn()
    {
        while (true)
        {
            wave++;
            yield return new WaitForSeconds(1.0f);

            for (int i = 0; i < microbesAmount;i++ )
            {
                int randomChance = Random.Range(-1, 1);
                if (randomChance == 0)
                {
                    nextMicrobe = badMicrobe;
                }
                else
                {
                    nextMicrobe = goodMicrobe;
                }


                int randomSpawn = Random.Range(0, spawns.Count);
                Instantiate(nextMicrobe, spawns[randomSpawn].transform.position, Quaternion.identity);
                yield return new WaitForSeconds(1.0f);

            }

            NextWave();

        }
        
        
    }

    void NextWave()
    {
        spawnDelay = spawnDelay - 0.1f;
        microbesAmount = microbesAmount + 2;
    }
}
