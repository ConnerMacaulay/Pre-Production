using UnityEngine;
using System.Collections;

public class Music : MonoBehaviour {

    private static Music musicInstance;

    public bool musicPlaying = false;
    public AudioSource mainMusic;
    public AudioClip musicTracks;

	// Use this for initialization
	void Start ()
    {
       
    }
	
	// Update is called once per frame
	void Update () {
        if (musicPlaying == false)
        {
            mainMusic = GetComponent<AudioSource>();

            DontDestroyOnLoad(this);

            if (musicInstance == null)
            {
                musicInstance = this;
            }
            else
            {
                DestroyObject(gameObject);
            }
            
            if (!mainMusic.isPlaying)
            {
                mainMusic.Play();
            }

            musicPlaying = true;
        }
    }
}
