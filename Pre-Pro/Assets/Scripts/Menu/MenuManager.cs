using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

using UnityEngine.UI;

public class MenuManager : MonoBehaviour {


    void Start()
    {
        /*
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
        */
    }

    void Update()
    {

     
    }
    // menu manager
    public void ChangeScene(string scenename)
    {
        SceneManager.LoadScene(scenename);
    }

   
}
