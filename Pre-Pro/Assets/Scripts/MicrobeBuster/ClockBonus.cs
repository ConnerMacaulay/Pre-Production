using UnityEngine;
using System.Collections;

public class ClockBonus : MonoBehaviour {

    private float timeToDestroy = 2.5f;
	// Use this for initialization
	void Start () {
        StartCoroutine(WaitAndDestroy());

    }

    // Update is called once per frame
    void Update () {

    }

    IEnumerator WaitAndDestroy()
    {
        yield return new WaitForSeconds(timeToDestroy);
        Destroy(this.gameObject);
    }
}
