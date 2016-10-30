using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Timer : MonoBehaviour {

    public float timeLeft;
    public int timeLeftInt;
    public Text timer;

    void Start()
    {
        timeLeft = 10; //Resetst the timer to the set time on start
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
            Debug.Log(timeLeftInt);
        }

        if (timeLeftInt == 0)
        {
            Application.LoadLevel("Quiz");
        }
    }
    //Converts the Int to a string and sends it to the timer Obj
    void TimerCount ()
    {
        timer.text = timeLeftInt.ToString();
    }
}
