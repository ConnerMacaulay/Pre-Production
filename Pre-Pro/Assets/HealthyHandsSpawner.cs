using UnityEngine;
using System.Collections;

public class HealthyHandsSpawner : MonoBehaviour {

    int wave;
    float range = 1.0f;
    BoxCollider2D bocCollider;
    public GameObject badMicrobe;
    public GameObject goodMicrobe;
    private int noMicrobes;
    private int waveAmount;
    private int nextWaveAmount;
    public int dMicrobes= 0;

    // Use this for initialization
    void Start () {
        wave = 0;
        nextWaveAmount = 5;

    }
	
	// Update is called once per frame
	void Update ()
    {
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
                SpawnGoods();
            }

        }
    }

    private void SpawnGoods()
    {
    }

    private void SpawnBads()
    {
        wave++;
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
       GameObject badMicrobeObj = Instantiate(badMicrobe, transform.position + randomPos, Quaternion.identity) as GameObject;
        badMicrobeObj.transform.SetParent(this.gameObject.transform);


    }
}
