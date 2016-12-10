using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class FallSpawn : MonoBehaviour {


    public List<GameObject> spawns = new List<GameObject>();
    public List<GameObject> goods = new List<GameObject>();
    public List<GameObject> bads = new List<GameObject>();
    GameObject nextMicrobe;

    int wave;
    int microbesAmount;
    float waveDelay;

    float spawnDelay;


	// Use this for initialization
	void Start () 
    {
        waveDelay = 2.0f;
        spawnDelay = 1.25f;
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
            yield return new WaitForSeconds(waveDelay);

            for (int i = 0; i < microbesAmount;i++ )
            {
                float randomChance = Random.value;
                if (randomChance >= 0.5f)
                {
                    int randomIndex = Random.Range(0, bads.Count);
                    nextMicrobe = bads[randomIndex];
                }
                else
                {
                    int randomIndex = Random.Range(0, goods.Count);
                    nextMicrobe = goods[randomIndex];
                }


                int randomSpawn = Random.Range(0, spawns.Count);
                Instantiate(nextMicrobe, spawns[randomSpawn].transform.position, Quaternion.identity);
                yield return new WaitForSeconds(spawnDelay);

            }

            NextWave();

        }
        
        
    }

    void NextWave()
    {
        if (wave < 9)
        {
            spawnDelay = spawnDelay - 0.15f;
            microbesAmount = microbesAmount + 2;
        }
        
    }
}
