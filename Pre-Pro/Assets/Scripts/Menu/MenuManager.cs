using UnityEngine;
using System.Collections;

public class MenuManager : MonoBehaviour {

    // menu manager
    public void ChangeScene(string scenename)
    {
        Application.LoadLevel(scenename);
    }

   
}
