using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreTextScript : MonoBehaviour {

    public int score;
    Text scoreText;
    GameObject scoreManager;
    Score scoreScript;
    
	// Use this for initialization
	void Start ()
    {
        
        scoreText = GetComponent<Text>();
        scoreManager = GameObject.FindGameObjectWithTag("ScoreManager");

        if (scoreManager != null)
        {
            scoreScript = scoreManager.GetComponent<Score>();
        }
        else
        {
            Debug.LogError("Score Manager missing !!");
        }
	}

    // Update is called once per frame
    void Update()
    {
        if (scoreManager != null)
        {
            score = scoreScript.score;
            scoreText.text = "Score: " + score.ToString();
        }
    }
}
