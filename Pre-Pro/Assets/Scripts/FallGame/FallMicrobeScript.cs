using UnityEngine;
using System.Collections;

public class FallMicrobeScript : MonoBehaviour {


    float lifetime = 2.5f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update ()
    {
	    if (lifetime > 0)
        {
            lifetime -= Time.deltaTime;
        }
        else
        {
            Destroy(this.gameObject);
        }
	}
}
