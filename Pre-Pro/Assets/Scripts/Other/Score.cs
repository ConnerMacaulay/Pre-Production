using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

    public int score = 0;
    GameObject canvas;
    public bool mb_Done = false;
    public bool hh_Done = false;
    public bool mC_Done = false;

	// Use this for initialization
	void Start ()
    {
       if (Application.loadedLevelName == "MicrobeBuster")
        {
            mb_Done = true;
        }
       else if (Application.loadedLevelName == "HealthyHands")
        {
            hh_Done = true;
        }
       else if (Application.loadedLevelName == "MicrobeCatcher")
        {
            mC_Done = true;
        }

            DontDestroyOnLoad(this.gameObject);

        




    }
	
	// Update is called once per frame
	void Update ()
    {
       
	}

    public void AddScore(int amount)
    {
        score = score + amount;
    }
}
