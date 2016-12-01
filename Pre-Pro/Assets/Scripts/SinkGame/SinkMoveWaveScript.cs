using UnityEngine;
using System.Collections;

public class SinkMoveWaveScript : MonoBehaviour {

	public Transform endWave;
	public float speed;

	// Use this for initialization
	void Start () 
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
		float step = speed * Time.deltaTime;

		transform.position = Vector3.MoveTowards (transform.position, endWave.position, step);
	
	}
}
