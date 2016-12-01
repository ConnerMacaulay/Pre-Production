using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Timer : MonoBehaviour {

    public float timeLeft;
    public int timeLeftInt;
    public Text timer;

    GameObject[] activeGoods;
    GameObject[] activeBads;

    void Start()
    {
       // timeLeft = 10; //Resetst the timer to the set time on start
        TimerCount();
    }
    void Update()
    {
        //Ticks down the timer per second
        if (timeLeft > 1)
        {
            timeLeft -= Time.deltaTime;
            timeLeftInt = Mathf.FloorToInt(timeLeft);
            TimerCount();
           // Debug.Log(timeLeftInt);
        }

        if (timeLeftInt == 0)
        {
            StartCoroutine(WaitAndLoadLevel("Quiz",3.0f));
        }
    }
    //Converts the Int to a string and sends it to the timer Obj
    void TimerCount ()
    {
        timer.text = timeLeftInt.ToString();
    }

    public void AddTime(float time)
    {
        timeLeft += time;
    }

    IEnumerator WaitAndLoadLevel(string name,float t)
    {
        activeBads = GameObject.FindGameObjectsWithTag("BadMicrobe");
        activeGoods = GameObject.FindGameObjectsWithTag("GoodMicrobe");

        foreach(GameObject microbe in activeBads )
        {
            Destroy(microbe);
        }
        foreach(GameObject microbe in activeGoods)
        {
            Destroy(microbe);

        }

        yield return new WaitForSeconds(t);
        Application.LoadLevel(name);


    }
}
