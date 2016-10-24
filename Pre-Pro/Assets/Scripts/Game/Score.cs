using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

    public int score;
    public Text scoreText;
	// Use this for initialization
	void Start ()
    {
        DontDestroyOnLoad(scoreText);
        score = 0;
	
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
