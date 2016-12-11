using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Match : MonoBehaviour {

    public float timeLeft;
    public int timeLeftInt;
    public Text timer;
    public bool hide = false; // checks if the hidden tile is missing 

    public string selected = "null";    //stores the name of the selected OBJ
    public string sComp = "null";   //stores the compareable string 
    public int rnd; // stores the random number geenrated
    public GameObject[] answer; //array of possible answers
    public GameObject[] missing; // stores the possible missing tiles
    public GameObject[] wrong; // stores the wrong objects that can be chosen
    public GameObject choice;

    GameObject scoreManager;
    Score scoreScript;

    // Use this for initialization
    void Start ()
    {
        // timeLeft = 10; //Resetst the timer to the set time on start
        TimerCount();

        rnd = Random.Range(0, 5); //sets rnd to a number between 0 and 5

        //choice = GameObject.Find("Choice");


        scoreManager = GameObject.Find("ScoreManager");
        if (scoreManager != null)
        {
            scoreScript = scoreManager.GetComponent<Score>();
        }

    }
	
	// Update is called once per frame
	void Update ()
    {
        //Ticks down the timer per second
        if (timeLeft > 1)
        {
            timeLeft -= Time.deltaTime;
            timeLeftInt = Mathf.FloorToInt(timeLeft);
            TimerCount();
            // Debug.Log(timeLeftInt);
        }

        if (timeLeftInt == 0 && hide == false)
        {
            timeLeft = 10;
            hide = true;
            missing[rnd].SetActive(false);
            choice.SetActive (true);
            return;
        }

        if (timeLeftInt == 0 && hide == true)
        {
            StartCoroutine(WaitAndLoadLevel(1.0f, "End"));
        }

        // raycasts on mouse click to get the name of the object it collided with 
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit2D hit = Physics2D.Raycast(new Vector2(Camera.main.ScreenToWorldPoint(Input.mousePosition).x,
                Camera.main.ScreenToWorldPoint(Input.mousePosition).y), Vector2.zero, 0f); ;
            //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (hit)
            {
                BoxCollider2D bc = hit.collider as BoxCollider2D;
                if (bc != null)
                {
                    print(rnd);
                    selected = bc.name;
                }
            }
        }
        for (int i = 0; i < Input.touchCount; i++)
        {
            if (Input.GetTouch(i).phase == TouchPhase.Began)
            {
                Vector2 touchInput = Input.GetTouch(i).position;
                if (i == 0 && Input.mousePosition != Vector3.zero)
                {
                    touchInput = Input.mousePosition;
                }

                RaycastHit2D touchHit = Physics2D.Raycast(new Vector2(Camera.main.ScreenToWorldPoint(touchInput).x,
                    Camera.main.ScreenToWorldPoint(touchInput).y), Vector2.zero, 0.0f);

                if (touchHit)
                {
                    BoxCollider2D bc = touchHit.collider as BoxCollider2D;
                    if (bc != null)
                    {
                            print(rnd);
                            selected = bc.name;
                        
                    }
                }
            }
        }

        if (selected != null)
        {
            GameObject selObj = GameObject.Find(selected); 
            SpriteRenderer sr = selObj.GetComponent<SpriteRenderer>();
            sComp = selected.Substring(0, selected.Length - 1);
            print("Selected: " + sComp + " Answer was: " + answer[rnd].name);
            if (answer[rnd].name == selected)
            {
                sr.color = Color.green;
                
                print("Correct Tile Selected!");
                StartCoroutine(WaitAndLoadLevel(1.0f, "Quiz"));
            }
            else
            {
                
                sr.color = Color.red;
                StartCoroutine(WaitAndLoadLevel(1.0f, "End"));
            }
        }
    }

    //Converts the Int to a string and sends it to the timer Obj
    void TimerCount()
    {
        timer.text = timeLeftInt.ToString();
    }

    public void AddTime(float time)
    {
        timeLeft += time;
    }

    IEnumerator WaitAndLoadLevel(float t , string name)
    {
        Cursor.visible = false;
        yield return new WaitForSeconds(t);
        Application.LoadLevel(name);
    }
}
