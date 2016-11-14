using UnityEngine;
using System.Collections;

public class CatchScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnTriggerEnter(Collider coll)
    {
        if (coll.gameObject.tag == "GoodMicrobe")
        {
            //Add Score
            Destroy(coll.gameObject);
        }
        else if (coll.gameObject.tag == "BadMicrobe")
        {
            //deduct Health
            Destroy(coll.gameObject);

        }
    }
}
