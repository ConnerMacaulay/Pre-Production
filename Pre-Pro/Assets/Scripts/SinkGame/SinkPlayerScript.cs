using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SinkPlayerScript : MonoBehaviour {

	public float originalMovementSpeed = 1.0f;
	public float changedMovementSpeed; 
	public bool jump = false;
	public float jumpHeight;

	public bool isGrounded = false;
	public LayerMask ground;
	public Transform groundCheck;
	public float groundRadius = 0.2f;

	public Text scoreText;

	void Awake()
	{
		groundCheck = transform.Find ("GroundCheck");
	}

	// Use this for initialization
	void Start () 
	{
		isGrounded = true;
	}
	
	// Update is called once per frame
	void Update () 
	{
		GameObject scoreManager = GameObject.Find("ScoreManager");
		if (scoreManager != null)
		{
			scoreText.text = "Score: " + scoreManager.GetComponent<Score>().score.ToString();
		}
		else
		{
			Debug.LogError("SCORE MANAGER MISSING!!!");
		}

		//isGrounded = Physics2D.Linecast (transform.position, groundCheck.position, 1 << LayerMask.NameToLayer ("Ground"));
		isGrounded = Physics2D.OverlapCircle(groundCheck.position, groundRadius, ground);

		if (isGrounded && Input.GetKeyDown (KeyCode.Space)) 
		{
			jump = true;
		}
			
	}

	void FixedUpdate()
	{
		float move = Input.GetAxis ("Horizontal");

		GetComponent<Rigidbody2D> ().velocity = new Vector2 (move * originalMovementSpeed, GetComponent<Rigidbody2D> ().velocity.y);

		if (jump)
		{
			GetComponent<Rigidbody2D> ().AddForce (new Vector2 (0f, jumpHeight));
			jump = false;
		}

	}

	void OnTriggerEnter2D (Collider2D col)
	{
		if (col.gameObject.tag == "Wave")
		{
			Debug.Log ("Player killed");
			Destroy (this.gameObject);
		}
			
	}
}
