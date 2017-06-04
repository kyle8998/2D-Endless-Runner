using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public WallPlayer thePlayer;

    private Vector3 lastPlayerPosition;
    private float distanceToMove;

	// Use this for initialization
	void Start () {
        thePlayer = FindObjectOfType<WallPlayer>();
        lastPlayerPosition = thePlayer.transform.position;

    }

    // Update is called once per frame
    void Update () {

        distanceToMove = thePlayer.transform.position.y - lastPlayerPosition.y;
        transform.position = new Vector3(transform.position.x, transform.position.y + distanceToMove, transform.position.z);
        //Gets last player position for next update
        lastPlayerPosition = thePlayer.transform.position;
	}
}
