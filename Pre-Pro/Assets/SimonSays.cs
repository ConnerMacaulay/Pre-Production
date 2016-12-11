using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SimonSays : MonoBehaviour
{

    public float timeLeft;
    public int timeLeftInt;
    public Text timer;
    public float delay = 2;

    public float rndTimer;

    public bool intro = false;
    public bool roundGoing = false;
    public bool saying = false;

    public int rng;
    public int round;
    public int lvl = 1;
    public int chosen = 0;

    public GameObject[] simon;
    public GameObject[] says;
    public GameObject[] answers;
    public int roundMinus;
    public GameObject introTxt;
    public string selected = "null";
    public string sComp = "null";

    // Use this for initialization
    void Start()
    {

        timeLeft = 5; //Resetst the timer to the set time on start
        TimerCount();

        introTxt = GameObject.FindGameObjectWithTag("Intro");
        simon = GameObject.FindGameObjectsWithTag("Simon");
        says = GameObject.FindGameObjectsWithTag("Say");

        SimonFalse();
        SayFalse();


    }

    // Update is called once per frame
    void Update()
    {
        rng = Random.Range(0, 6);

        if (timeLeft > 1)
        {
            timeLeft -= Time.deltaTime;
            timeLeftInt = Mathf.FloorToInt(timeLeft);
            TimerCount();
            // Debug.Log(timeLeftInt);
        }

        if (timeLeftInt == 0 && intro == false)
        {
            Round();
            intro = true;
            introTxt.SetActive(false);
            round = lvl;
            roundMinus = round - 1;
            roundGoing = true;
            return;
        }

        if (roundGoing == true)
        {

            while (round != 0)
            {
                SimonTrue();
                answers[roundMinus] = simon[rng];
                round -= 1;
            }
            if (timeLeft < 1)
            {
                SimonFalse();
                SayTrue();
                roundGoing = false;
                saying = true;
            }
        }

        // raycasts on mouse click to get the name of the object it collided with 
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                BoxCollider bc = hit.collider as BoxCollider;
                if (bc != null && bc.tag == "Say")
                {
                    print(rng);
                    selected = bc.name;
                }
            }
        }

        if (selected != null)
        {
            GameObject selObj = GameObject.Find(selected);
            SpriteRenderer sr = selObj.GetComponent<SpriteRenderer>();
            sComp = selected.Substring(0, selected.Length - 1);

            if (answers[chosen].name == sComp)
            {
                sr.color = Color.green;
                print("Correct Tile Selected!");
                // StartCoroutine(WaitAndLoadLevel(1.0f));
                delay -= Time.deltaTime;
                if(delay <=0)
                {
                    sr.color = Color.white;
                    selected = null;
                    delay = 3;
                   
                  if(lvl > 1 && chosen != lvl)
                    {
                         chosen += 1;
                    }
                  else
                    {
                        lvl += 1;
                        round = lvl;
                        saying = false;
                        roundGoing = true;
                        Round();
                        SayFalse();
                    }
                }
                
            }
            else
            {
                sr.color = Color.red;
            }
        }

    }

    void Round()
    {
        timeLeft = 3 * lvl;
    }

    //Converts the Int to a string and sends it to the timer Obj
    void TimerCount()
    {
        timer.text = timeLeftInt.ToString();
    }

    void SimonTrue()
    {
        simon[rng].SetActive(true);
    }

    void SimonFalse()
    {
        foreach (GameObject si in simon)
        {
            si.SetActive(false);
        }
    }

    void SayTrue()
    {
        foreach (GameObject say in says)
        {
            say.SetActive(true);
        }

    }

    void SayFalse()
    {
        foreach (GameObject say in says)
        {
            say.SetActive(false);
        }
    }
}
