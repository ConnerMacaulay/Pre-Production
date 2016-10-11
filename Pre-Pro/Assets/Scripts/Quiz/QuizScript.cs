using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;

public class QuizScript : MonoBehaviour {

    public Text questionObj;
    public Button answer1;
    public Button answer2;
    public Button answer3;
    public Button answer4;

    public List<string> questions = new List<string>();

    int questionNumber;
    string correctAnswer;



    // Use this for initialization
    void Start ()
    {
        questionNumber = Random.Range(0, questions.Count);
        questionObj.text = questions[questionNumber];

        if (questionNumber == 0)
        {
            answer1.GetComponentInChildren<Text>().text = "4";
            answer2.GetComponentInChildren<Text>().text = "2";
            answer3.GetComponentInChildren<Text>().text = "8";
            answer4.GetComponentInChildren<Text>().text = "6";
            correctAnswer = "6";
        }
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}

   
}
