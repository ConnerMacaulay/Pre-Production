using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;

public class QuizUpdatedScript : MonoBehaviour {

	public QuizListScript[] quizScript;
	private static List <QuizListScript> unseenQuestion;

	private QuizListScript currentQuestion;

	public Text scoreText;
	public Text question;
	public Button answer1Button;
	public Button answer2Button;
	public Button answer3Button;
	public Button answer4Button;
	public GameObject helpTextPanel;
	public Text helpText;

	private AudioSource winSound;
	public AudioClip win;

	private AudioSource wrongSound;
	public AudioClip wrong;

    GameObject menuManager;
    GameManagerScript gameManagementScript;
	// Use this for initialization
	void Start () 
	{
        StartCoroutine(WaitAndBegin(2.5f));

        winSound = GetComponent<AudioSource> ();
		wrongSound = GetComponent<AudioSource> ();
		if (unseenQuestion == null || unseenQuestion.Count == 0)
		{
			unseenQuestion = quizScript.ToList<QuizListScript>();
		}

		SetNewQuestion ();
        menuManager = GameObject.Find("MenuManager");
        if (menuManager != null)
        {
            gameManagementScript = menuManager.GetComponent<GameManagerScript>();
        }
        else
        {
            Debug.LogError("Game manager not found !!!");
        }



    }

    // Update is called once per frame
    void Update () 
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

    IEnumerator WaitAndBegin(float t)
    {
        Cursor.visible = false;
        answer1Button.GetComponent<Button>().interactable = false;
        answer2Button.GetComponent<Button>().interactable = false;
        answer3Button.GetComponent<Button>().interactable = false;
        answer4Button.GetComponent<Button>().interactable = false;

        yield return new WaitForSeconds(t);

        Cursor.visible = true;
        answer1Button.GetComponent<Button>().interactable = true;
        answer2Button.GetComponent<Button>().interactable = true;

		if (currentQuestion.trueOrFalseQuestion != true) 
		{
			answer3Button.GetComponent<Button> ().interactable = true;
			answer4Button.GetComponent<Button> ().interactable = true;
		}

    }

    void SetNewQuestion()
	{
		int randomQuestion = Random.Range (0, unseenQuestion.Count);

		currentQuestion = unseenQuestion [randomQuestion];

		question.text = currentQuestion.question;
		answer1Button.GetComponentInChildren<Text>().text = currentQuestion.answer1;
		answer2Button.GetComponentInChildren<Text>().text = currentQuestion.answer2;
		answer3Button.GetComponentInChildren<Text>().text = currentQuestion.answer3;
		answer4Button.GetComponentInChildren<Text>().text = currentQuestion.answer4;

	}

	public void Answer1()
	{
		if (currentQuestion.answer1 == currentQuestion.correctAnswer)
		{
			answer1Button.GetComponent<Image> ().color = new Color (0f, 1f, 0f, 1f);
			winSound.PlayOneShot (win, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer1Text;
			helpText.GetComponent<Text> ().color = new Color (0f, 1f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(win.length));

        }
        else 
		{
			answer1Button.GetComponent<Image>().color = new Color(1f, 0f, 0f, 1f);
			wrongSound.PlayOneShot (wrong, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer1Text;
			helpText.GetComponent<Text> ().color = new Color (1f, 0f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(wrong.length + 0.5f));

        }

    }

    public void Answer2()
	{
		if (currentQuestion.answer2 == currentQuestion.correctAnswer) 
		{
			answer2Button.GetComponent<Image> ().color = new Color (0f, 1f, 0f, 1f);
			winSound.PlayOneShot (win, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer2Text;
			helpText.GetComponent<Text> ().color = new Color (0f, 1f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(win.length));

        }
        else 
		{
			answer2Button.GetComponent<Image>().color = new Color(1f, 0f, 0f, 1f);
			wrongSound.PlayOneShot (wrong, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer2Text;
			helpText.GetComponent<Text> ().color = new Color (1f, 0f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(wrong.length + 0.5f));

        }

    }

    public void Answer3()
	{
		if (currentQuestion.answer3 == currentQuestion.correctAnswer) 
		{
			answer3Button.GetComponent<Image> ().color = new Color (0f, 1f, 0f, 1f);
			winSound.PlayOneShot (win, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer3Text;
			helpText.GetComponent<Text> ().color = new Color (0f, 1f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(win.length));

        }
        else 
		{
			answer3Button.GetComponent<Image>().color = new Color(1f, 0f, 0f, 1f);
			wrongSound.PlayOneShot (wrong, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer3Text;
			helpText.GetComponent<Text> ().color = new Color (1f, 0f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(wrong.length + 0.5f));

        }

    }

    public void Answer4()
	{
		if (currentQuestion.answer4 == currentQuestion.correctAnswer) 
		{
			answer4Button.GetComponent<Image> ().color = new Color (0f, 1f, 0f, 1f);
			winSound.PlayOneShot (win, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer4Text;
			helpText.GetComponent<Text> ().color = new Color (0f, 1f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(win.length));

        }
        else 
		{
			answer4Button.GetComponent<Image>().color = new Color(1f, 0f, 0f, 1f);
			wrongSound.PlayOneShot (wrong, 0.8f);
			helpTextPanel.gameObject.SetActive (true);
			helpText.text = currentQuestion.answer4Text;
			helpText.GetComponent<Text> ().color = new Color (1f, 0f, 0f, 1f);
			DisableButtons ();
            //StartCoroutine(WaitAndLoad(wrong.length +0.5f));

        }

    }

	public void DisableButtons ()
	{
		answer1Button.GetComponent<Button> ().interactable = false;
		answer2Button.GetComponent<Button> ().interactable = false;
		answer3Button.GetComponent<Button> ().interactable = false;
		answer4Button.GetComponent<Button> ().interactable = false;
	}

	public void RandomScene()
	{
		gameManagementScript.RandomScene();
	}


    IEnumerator WaitAndLoad(float time)
    {
        yield return new WaitForSeconds(time);
        gameManagementScript.RandomScene();
      
    }

}
