using UnityEngine;
using System.Collections;

  [RequireComponent(typeof(BoxCollider2D))]

public class DragObject : MonoBehaviour {

    private Vector3 screenPoint;
    private Vector3 offset;

    void Update()
    {
        //touch drag

        if (Input.touchCount >= 1)
        {
            foreach(Touch touch in Input.touches)
            {
                RaycastHit2D touchHit = Physics2D.Raycast(new Vector2(Camera.main.ScreenToWorldPoint(touch.position).x,
                                  Camera.main.ScreenToWorldPoint(touch.position).y), Vector2.zero, 0.0f);

                if (touchHit)
                {
                    gameObject.transform.position = touchHit.point;
                    //offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector2(touchHit.point.x, touchHit.point.y));

                }
            }
        }
    }

    void OnMouseDown()
    {

        screenPoint = Camera.main.WorldToScreenPoint(
            this.gameObject.transform.position);

        offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(
            new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenPoint.z));

    }
	
    void OnMouseDrag()
    {
        Vector3 curScreenPoint = new Vector3 (Input.mousePosition.x,
            Input.mousePosition.y,screenPoint.z);

        Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint);

        transform.position = curPosition;

    }
   
}
