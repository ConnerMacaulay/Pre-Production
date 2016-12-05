using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class GameManagerScript : MonoBehaviour {

    public List<string> levels = new List<string>();

	// Use this for initialization
	void Start ()
    {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void LoadLevel(string levelName)
    {
        SceneManager.LoadScene(levelName);
    }

    public void RandomScene( )
    {
        int randomIndex = Random.Range(0, levels.Count);
        SceneManager.LoadScene(levels[randomIndex].ToString());
    }
    
}
