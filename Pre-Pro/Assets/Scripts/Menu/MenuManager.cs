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

    void Update()
    {

        //TEMP CODE DELETE AFTER RETURN TO MENU FEATURE IS IMPLEMENTED
        if (Input.GetKeyDown(KeyCode.H))
        {
            Application.LoadLevel("Menu");
        }
    }
    // menu manager
    public void ChangeScene(string scenename)
    {
        Application.LoadLevel(scenename);
    }

   
}
