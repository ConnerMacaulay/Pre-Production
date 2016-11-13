using UnityEngine;
using System.Collections;

public class Health : MonoBehaviour
{


    public int currentHealth;
    int maxHealth = 3;


    // Use this for initialization
    void Start()
    {
        currentHealth = maxHealth;

    }

    // Update is called once per frame
    void Update()
    {
        if (Application.loadedLevelName == "Game")
        {
            if (currentHealth == 2)
            {
                GameObject heart = GameObject.Find("Heart1");
                Destroy(heart);

            }
            if (currentHealth == 1)
            {
                GameObject heart = GameObject.Find("Heart2");
                Destroy(heart);
            }
            if (currentHealth == 0)
            {
                Application.LoadLevel("End");

            }
        }
    }

}
