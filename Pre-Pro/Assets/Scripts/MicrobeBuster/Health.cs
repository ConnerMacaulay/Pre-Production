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
        if (Application.loadedLevelName == "MicrobeBuster" || Application.loadedLevelName == "MicrobeCatcher" || Application.loadedLevelName == "HealthyHands")
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
                if (Application.loadedLevelName == "MicrobeBuster")
                {
                    Application.LoadLevel("End");

                }
                else if (Application.loadedLevelName == "MicrobeCatcher")
                {
                    Application.LoadLevel("Quiz");

                }


            }
        }
    }

}
