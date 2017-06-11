using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleDestroyer : MonoBehaviour {

    public GameObject obstacleDestructionPoint;

	// Use this for initialization
	void Start () {
        obstacleDestructionPoint = GameObject.Find("ObstacleDestructionPoint");
	}
	
	// Update is called once per frame
	void Update () {
        if (transform.position.y < obstacleDestructionPoint.transform.position.y)
        {
            //Destroy(gameObject);
            gameObject.SetActive(false);
        }

	}
}
