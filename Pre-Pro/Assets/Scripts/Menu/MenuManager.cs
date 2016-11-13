using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MenuManager : MonoBehaviour {

    public Text scoreText;

    void Start()
    {

        GameObject scoreManager = GameObject.Find("ScoreManager");
        if (scoreManager != null)
        {
            if (Application.loadedLevelName == "Menu")
            {
                scoreText = null;
                Destroy(scoreManager, 0.1f);

            }
            scoreText.text = "Your Score: " + scoreManager.GetComponent<Score>().score.ToString();

        }
    }
    // menu manager
    public void ChangeScene(string scenename)
    {
        Application.LoadLevel(scenename);
    }

   
}
