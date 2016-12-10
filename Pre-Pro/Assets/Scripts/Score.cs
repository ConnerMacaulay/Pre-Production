using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

    public int score = 0;
    GameObject canvas;
    
	// Use this for initialization
	void Start ()
    {
       

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
