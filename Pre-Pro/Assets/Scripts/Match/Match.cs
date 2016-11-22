using UnityEngine;
using System.Collections;

public class Match : MonoBehaviour {

    public string selected = "null";    //stores the name of the selected OBJ
    public string sComp = "null";   //stores the compareable string 
    public int rnd; // stores the random number geenrated
    public GameObject[] answer; //array of possible answers
    public GameObject[] missing; // stores the possible missing tiles
    public GameObject[] wrong; // stores the wrong objects that can be chosen
   
    // Use this for initialization
    void Start ()
    {
       
        rnd = Random.Range(0, 5); //sets rnd to a number between 0 and 5

        missing[rnd].SetActive(false);

    }
	
	// Update is called once per frame
	void Update ()
    { 
        
        // raycasts on mouse click to get the name of the object it collided with 
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                BoxCollider bc = hit.collider as BoxCollider;
                if (bc != null)
                {
                    print(rnd);
                    selected = bc.name;
                }
            }
        }

        if (selected != null)
        {
            GameObject selObj = GameObject.Find(selected);
            print(selObj);
            SpriteRenderer sr = selObj.GetComponent<SpriteRenderer>();
            sr.color = Color.green;
            sComp = selected.Substring(0, selected.Length - 1);
            print("Selected: " + sComp + " Answer was: " + answer[rnd].name);
        }

        if (answer[rnd].name == selected)
        {
            print("correct");
        }
     }
}
