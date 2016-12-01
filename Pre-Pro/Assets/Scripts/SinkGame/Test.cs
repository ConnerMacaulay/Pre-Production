using UnityEngine;
using System.Collections;

public struct WaterLinePart
{
	public float height;
	public float velocity;
	public GameObject gameObject;
	public Mesh mesh;
	public Vector2 boundsMin;
	public Vector2 boundsMax;
}

public class Test : MonoBehaviour
{
	public float velocityDamping = 0.999999f; // Proportional velocity damping, must be less than or equal to 1.
	public float timeScale = 25f;

	public int Width = 50;
	public float Height = 10f;
	public Material material;
	public Color color = Color.blue;

	private WaterLinePart[] parts;

	private int size;
	private float currentHeight;

	void Start()
	{
		Initialize();
	}

	private void Initialize()
	{
		size = Width;
		currentHeight = Height;

		material.color = color;

		parts = new WaterLinePart[size];

		for (int i = 0; i < size; i++)
		{
			GameObject go = new GameObject("WavePart");
			go.transform.parent = this.transform;
			go.transform.localPosition = new Vector3(i - (size / 2), 0, 0);

			parts[i].gameObject = go;
		}
			
		for (int i = 0; i < size; i++)
		{
			GameObject go = parts[i].gameObject;

			// Except for the last point
			if (i < size - 1)
			{
				Mesh mesh = new Mesh();
				mesh.MarkDynamic();
				parts[i].mesh = mesh;

				go.AddComponent<MeshFilter>();
				go.AddComponent<MeshRenderer>();

				UpdateMeshVertices(i);

				InitializeTrianglesAndNormalsForMesh(i);

				go.GetComponent<MeshFilter>().mesh = mesh;
				go.GetComponent<MeshRenderer>().material = material;
			}
		}
			
		Splash(size / 2, 10);
	}
		
	private void UpdateMeshVertices(int i)
	{
		Mesh mesh = parts[i].mesh;
		if (mesh == null) return;

		Transform current = parts[i].gameObject.transform;

		Transform next = current;
		if (i < parts.Length - 1)
		{
			next = parts[i + 1].gameObject.transform;
		}

		Vector3 left = Vector3.zero;
		Vector3 right = next.localPosition - current.localPosition;

		// Get all parts of the mesh (it's just 2 planes, one on top and one on the front face)
		Vector3 topLeftFront = new Vector3(left.x, left.y, 0);
		Vector3 topRightFront = new Vector3(right.x, right.y, 0);
		Vector3 topLeftBack = new Vector3(left.x, left.y, 1);
		Vector3 topRightBack = new Vector3(right.x, right.y, 1);
		Vector3 bottomLeftFront = new Vector3(left.x, left.y + (0 - Height), 0);
		Vector3 bottomRightFront = new Vector3(right.x, right.y + (0 - Height), 0);

		mesh.vertices = new Vector3[] { topLeftFront, topRightFront, topLeftBack, topRightBack, bottomLeftFront, bottomRightFront };

		parts[i].boundsMin = topLeftFront + current.position;
		parts[i].boundsMax = bottomRightFront + current.position;
	}

	private void InitializeTrianglesAndNormalsForMesh(int i)
	{
		Mesh mesh = parts[i].mesh;
		if (mesh == null) return;

		var uvs = new Vector2[mesh.vertices.Length];
		for (int i2 = 0; i2 < uvs.Length; i2++)
		{
			uvs[i2] = new Vector2(mesh.vertices[i2].x, mesh.vertices[i2].z);
		}
		mesh.uv = uvs;

		mesh.triangles = new int[] { 5, 4, 0, 0, 1, 5, 0, 2, 3, 3, 1, 0 };

		mesh.RecalculateNormals();
	}

	void Update()
	{
		color = material.color;

		//Splash(size / 2, 10);

		for (int i = 1; i < size - 1; i++)
		{
			int j = i - 1;
			int k = i + 1;
			parts[i].height = (parts[i].gameObject.transform.localPosition.y + parts[j].gameObject.transform.localPosition.y + parts[k].gameObject.transform.localPosition.y) / 3.0f;
		}
			
		for (int i = 0; i < size; i++)
		{
			parts[i].velocity = (parts[i].velocity + (parts[i].height - parts[i].gameObject.transform.localPosition.y)) * velocityDamping;

			float timeFactor = Time.deltaTime * timeScale;
			if (timeFactor > 1f) timeFactor = 1f;

			parts[i].height += parts[i].velocity * timeFactor;

			// Update the dot position
			Vector3 newPosition = new Vector3(
				parts[i].gameObject.transform.localPosition.x,
				parts[i].height,
				parts[i].gameObject.transform.localPosition.z);
			parts[i].gameObject.transform.localPosition = newPosition;
		}

		// Update meshes
		for (int i = 0; i < size; i++)
		{
			UpdateMeshVertices(i);
		}
			
	}

	public void Splash(Vector3 location, int force)
	{
		// Find the touched part
		for (int i = 0; i < (size - 1); i++)
		{
			if (location.x >= parts[i].boundsMin.x
				&& location.x < parts[i].boundsMax.x)
			{
				if (location.y <= parts[i].boundsMin.y
					&& location.y > parts[i].boundsMax.y)
				{
					Splash(i, force);
				}
			}
		}

	}

	private void Splash(int i, int heightModifier)
	{
		parts[i].gameObject.transform.localPosition = new Vector3(
			parts[i].gameObject.transform.localPosition.x,
			parts[i].gameObject.transform.localPosition.y + heightModifier,
			parts[i].gameObject.transform.localPosition.z
		);
	}

	void OnTriggerEnter2D (Collider2D col)
	{
		if (col.gameObject.tag == "Player") 
		{
			Destroy (col.gameObject);
		}
	}
}
