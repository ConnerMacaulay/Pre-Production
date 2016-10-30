using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

    public int score = 0;
    public Text scoreText;


	// Use this for initialization
	void Start ()
    {
       
        if (Application.loadedLevelName != "Menu")
        {
            DontDestroyOnLoad(this.gameObject);

        }




    }
	
	// Update is called once per frame
	void Update ()
    {
        scoreText.text = "Score: " + score.ToString();
	}

    public void AddScore(int amount)
    {
        score = score + amount;
    }
}
