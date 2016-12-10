using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CoinScript : MonoBehaviour {

    GameObject scoreManager;
    int score;
    int coins;
	// Use this for initialization
	void Start ()
    {
        GameObject scoreManager = GameObject.Find("ScoreManager");
        if (scoreManager != null)
        {
            score = scoreManager.GetComponent<Score>().score;
            coins = score / 4;
            gameObject.GetComponent<Text>().text = "Coins: " + coins;
        }
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
