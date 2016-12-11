using UnityEngine;
using System.Collections;

public class SinkSoapScript : MonoBehaviour {

	public SinkPlayerScript playerScript;
	public SinkMoveWaveScript waveScript;

	public Score scoreScript;

	public int addScoreAmount;

	// Use this for initialization
	void Start () 
	{
		playerScript = GameObject.FindGameObjectWithTag ("Player").GetComponent<SinkPlayerScript> ();
		waveScript = GameObject.FindGameObjectWithTag ("Wave").GetComponent<SinkMoveWaveScript> ();

		scoreScript = GameObject.Find ("ScoreManager").GetComponent<Score>();
	
	}
	
	// Update is called once per frame
	void Update () 
	{

	}

	void SelectRandom()
	{
		int random = Random.Range (0, 4);
		if (random == 1) 
		{
			Debug.Log ("1");
			IncreaseMoveSpeed ();
            AddScore();
		}
		else if (random == 2) 
		{
			Debug.Log ("2");
			SlowWave ();
            AddScore();
		} 
		else 
		{
			Debug.Log ("3");
			AddScore ();
		}
	}

	public void SlowWave()
	{
		waveScript.speed /= 1.2f;
	}

	public void AddScore()
	{
		scoreScript.AddScore(Random.Range(20,50));
	}

	public void IncreaseMoveSpeed()
	{
		playerScript.originalMovementSpeed *= 1.3f;
	}

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "Player") 
		{
			SelectRandom ();
			Destroy (this.gameObject);
		}
	}
}
