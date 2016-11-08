using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;


public class QuizScript : MonoBehaviour {

    public Text questionObj;
    public Button answer1;
    public Button answer2;
    public Button answer3;
    public Button answer4;

    public Text scoreText;

    public List<string> questions = new List<string>();

    int questionNumber;
    string correctAnswer;

    private AudioSource winSound;
    public AudioClip win;

    private AudioSource wrongSound;
    public AudioClip wrong;

    // Use this for initialization
    void Start ()
    {
        Cursor.visible = true;
        winSound = GetComponent<AudioSource>();
        wrongSound = GetComponent<AudioSource>();

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
        else if (questionNumber ==1)
        {
            answer1.GetComponentInChildren<Text>().text = "Soap and cold water";
            answer2.GetComponentInChildren<Text>().text = "Soap and warm water";
            answer3.GetComponentInChildren<Text>().text = "Wipe hands with a tissue";
            answer4.GetComponentInChildren<Text>().text = "Very hot water";
            correctAnswer = "Soap and warm water";
        }
        else if (questionNumber == 2)
        {
            answer1.GetComponentInChildren<Text>().text = "Palm to Palm";
            answer2.GetComponentInChildren<Text>().text = "Back of fingers to opposing palms with fingers interlaced";
            answer3.GetComponentInChildren<Text>().text = "Palm to palm fingers interlaced";
            answer4.GetComponentInChildren<Text>().text = "In-between fingers";
            correctAnswer = "Palm to Palm";
        }
        else if (questionNumber == 3)
        {
            answer1.GetComponentInChildren<Text>().text = "Before eating food";
            answer2.GetComponentInChildren<Text>().text = "Before going to sleep";
            answer3.GetComponentInChildren<Text>().text = "After Flushing the toilet";
            answer4.GetComponentInChildren<Text>().text = "After catching a sneeze";
            correctAnswer = "Before going to sleep";
        }
        else if (questionNumber == 4)
        {
            answer1.GetComponentInChildren<Text>().text = "1-10 seconds";
            answer2.GetComponentInChildren<Text>().text = "15-30 seconds";
            answer3.GetComponentInChildren<Text>().text = "30-60 seconds";
            answer4.GetComponentInChildren<Text>().text = "1-2 minutes";
            correctAnswer = "15-30 seconds";
        }
        else if (questionNumber == 5)
        {
            answer1.GetComponentInChildren<Text>().text = "Palm to palm";
            answer2.GetComponentInChildren<Text>().text = "Back of fingers to opposing palms with fingers interlaced";
            answer3.GetComponentInChildren<Text>().text = "Right palm over the left hand. Left palm over right hand";
            answer4.GetComponentInChildren<Text>().text = "Palm to palm fingers interlaced";
            correctAnswer = "Palm to palm fingers interlaced";
        }


    }

    void Update()
    {
        GameObject scoreManager = GameObject.Find("ScoreManager");
        if (scoreManager != null)
        {
            scoreText.text = "Score: " + scoreManager.GetComponent<Score>().score.ToString();
        }
        else
        {
            Debug.LogError("SCORE MANAGER MISSING!!!");
        }
    }
	

    public void CheckAnswer(Button button)
    {
        if (button.GetComponentInChildren<Text>().text == correctAnswer)
        {
            Debug.Log("CORRECT!!!!!!!!!");
            button.GetComponent<Image>().color = new Color(0f, 1f, 0f, 1f);
            winSound.PlayOneShot(win,0.8f);
            StartCoroutine(WaitAndLoadLevel(GetComponent<AudioSource>().clip.length));
        }
        else
        {
            Debug.Log("FALSE :(");
            GameObject scoreManager = GameObject.Find("ScoreManager");
            if (scoreManager != null)
            {
                scoreManager.GetComponent<Score>().score -= 40;
            }
            button.GetComponent<Image>().color = new Color(1f, 0f, 0f, 1f);
            wrongSound.PlayOneShot(wrong, 0.8f);
        }
    }

    IEnumerator WaitAndLoadLevel(float audioTime)
    {
        yield return new WaitForSeconds(audioTime);
        Application.LoadLevel("End");

    }


}
    
