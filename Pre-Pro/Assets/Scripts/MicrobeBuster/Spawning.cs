﻿using UnityEngine;
using System.Collections;

public class Spawning : MonoBehaviour {


    public float range = 10f;
    public GameObject badMicrobe;
    public GameObject goodMicrobe;
    public int noMicrobes;
    public int setMicrobes;
    public int dMicrobes = 0;
    int waveAmount;
    int nextWaveAmount;
    public int killScore = 10;

    public GameObject clockPrefab;

    Score scoreScript;
    Health healthScript;

    private AudioSource bubbleSound;
    public AudioClip bubble;

    HandSwitch handSwitch;
    int wave;

   


    

    // Use this for initialization
    void Start () {

        wave = 0;
        nextWaveAmount = 5;
        bubbleSound = GetComponent<AudioSource>();

        setMicrobes = noMicrobes;

        GameObject scoreManagerObj = GameObject.Find("ScoreManager");

        if (scoreManagerObj != null)
        {
            scoreScript = scoreManagerObj.GetComponent<Score>();
            healthScript = scoreManagerObj.GetComponent<Health>();

        }
    }

    // Update is called once per frame
    void Update()
    {
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
            SpawnClockPower();
            if (wave > 3)
            {
                SpawnGoods();
            }

        }

        //Click and destroy objects
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit2D hit = Physics2D.Raycast(new Vector2(Camera.main.ScreenToWorldPoint(Input.mousePosition).x,
                Camera.main.ScreenToWorldPoint(Input.mousePosition).y),Vector2.zero,0f);

            if (hit)
            {
                BoxCollider2D bc = hit.collider as BoxCollider2D;
                if (bc != null)
                {
                    if (bc.gameObject.tag == "Clock")
                    {
                        Destroy(bc.gameObject);
                        GetComponent<Timer>().AddTime(3.0f);
                    }

                    else if (bc.gameObject.tag == "BadMicrobe")
                    {
                        Destroy(bc.gameObject);
                        dMicrobes += 1;
                        scoreScript.AddScore(killScore);
                        bubbleSound.PlayOneShot(bubble, 0.8f);
                        Debug.Log("Hit");
                    }
                    else if (bc.gameObject.tag == "GoodMicrobe")
                    {
                        Destroy(bc.gameObject);
                        scoreScript.AddScore(-killScore);
                        healthScript.currentHealth--;
                        bubbleSound.PlayOneShot(bubble, 0.8f);
                        Debug.Log("Hit");
                    }



                }
            }

            for (int i = 0; i < Input.touchCount; i++)
            {
                if (Input.GetTouch(i).phase == TouchPhase.Began)
                {
                    RaycastHit2D touchHit = Physics2D.Raycast(new Vector2(Camera.main.ScreenToWorldPoint(Input.GetTouch(i).position).x,
                        Camera.main.ScreenToWorldPoint(Input.GetTouch(i).position).y), Vector2.zero, 0.0f);

                    if (touchHit)
                    {
                        BoxCollider2D bc = hit.collider as BoxCollider2D;
                        if (bc != null)
                        {
                            if (bc.gameObject.tag == "Clock")
                            {
                                Destroy(bc.gameObject);
                                GetComponent<Timer>().AddTime(3.0f);
                            }

                            else if (bc.gameObject.tag == "BadMicrobe")
                            {
                                Destroy(bc.gameObject);
                                dMicrobes += 1;
                                scoreScript.AddScore(killScore);
                                bubbleSound.PlayOneShot(bubble, 0.8f);
                                Debug.Log("Hit");
                            }
                            else if (bc.gameObject.tag == "GoodMicrobe")
                            {
                                Destroy(bc.gameObject);
                                scoreScript.AddScore(-killScore);
                                healthScript.currentHealth--;
                                bubbleSound.PlayOneShot(bubble, 0.8f);
                                Debug.Log("Hit");
                            }

                        }
                    }
                }
            }



            //Checks if all the microbes have been spawned
           
        }
    }
    //Creates a random spawn point for the microbes
    private void SpawnBads()
    {
        wave++;
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
        
        Instantiate(badMicrobe, transform.position + randomPos, Quaternion.identity);

        
    }

    private void SpawnGoods()
    {
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
        int randomChance = Random.Range(-1, 1);
        Debug.Log(randomChance.ToString());
        if (randomChance == 0)
        {
            Instantiate(goodMicrobe, transform.position + randomPos, Quaternion.identity);
        }
    }

    private void SpawnClockPower()
    {
        Vector3 randomPos = Random.insideUnitSphere * range;
        randomPos.z = -1;
        int randomChance = Random.Range(-1, 1);
        Debug.Log(randomChance.ToString());
        if (randomChance == 0)
        {
            Instantiate(clockPrefab, transform.position + randomPos, Quaternion.identity);
        }
    }

   
}
