using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class HealthyHandsSpawner : MonoBehaviour {

    public int wave;
    float range = 3.0f;
    BoxCollider2D bocCollider;
    public List<GameObject> badMicrobes = new List<GameObject>();
    public GameObject goodMicrobe;
    public GameObject clockObject;
    private int noMicrobes;
    private int waveAmount;
    public int nextWaveAmount;
    public int dMicrobes= 0;

    public AudioClip waveClear;
    // Use this for initialization
    void Start () {
        wave = 0;
        nextWaveAmount = 5;

    }
	
	// Update is called once per frame
	void Update ()
    {
        Debug.Log(wave.ToString());
        //Checks if all the microbes have been spawned
        if (noMicrobes > 0)
        {
            waveAmount = nextWaveAmount;
            SpawnBads();
            noMicrobes -= 1;

        }

        if (dMicrobes == waveAmount)
        {
           
            nextWaveAmount += 1;
            dMicrobes = 0;
            noMicrobes = nextWaveAmount;
            if (wave > 3)
            {
                SpawnClock();
            }
            GetComponent<AudioSource>().PlayOneShot(waveClear);
        }
    }

    private void SpawnClock()
    {
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
        float randomChance = Random.value;
        if (randomChance >= 0.4)
        {
            GameObject clock = Instantiate(clockObject, transform.position + randomPos, Quaternion.identity) as GameObject;
            clock.transform.SetParent(this.gameObject.transform);
        }
    }

    private void SpawnGoods()
    {
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
        float randomChance = Random.value;
        Debug.Log(randomChance.ToString());
        if (randomChance >= 0.4f)
        {
            GameObject goodMic = Instantiate(goodMicrobe, transform.position + randomPos, Quaternion.identity) as GameObject;
            goodMic.transform.SetParent(this.gameObject.transform);
        }
    }

    private void SpawnBads()
    {
        wave++;
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
        int randomIndex = Random.Range(0, badMicrobes.Count);
        GameObject badMicrobeObj = Instantiate(badMicrobes[randomIndex], transform.position + randomPos, Quaternion.identity) as GameObject;
        badMicrobeObj.transform.SetParent(this.gameObject.transform);


    }
}
