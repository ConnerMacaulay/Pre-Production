using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class BackgroundRandomizer : MonoBehaviour {


    public List<Sprite> backgrounds = new List<Sprite>();
    GameObject background;
    SpriteRenderer sRenderer;
	// Use this for initialization
	void Start ()
    {
        Cursor.visible = true;
        background = GameObject.Find("Background");
        if (background != null)
        {
            sRenderer = background.GetComponent<SpriteRenderer>();
            if (sRenderer == null)
            {
                Debug.LogError("Cant find sprite renderer");
            }
        }
        else
        {
            Debug.LogError("background not found !!!");
        }

        RandomBackground();
	}
	

    void RandomBackground()
    {
        int randomIndex = Random.Range(0, backgrounds.Count);
        sRenderer.sprite = backgrounds[randomIndex];
    }
	// Update is called once per frame
	void Update ()
    {
	
	}
}
