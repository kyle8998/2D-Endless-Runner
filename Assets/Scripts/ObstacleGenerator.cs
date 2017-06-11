using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleGenerator : MonoBehaviour {

    public GameObject theObstacle;
    public Transform generationPoint;
    private float distanceBetween;
    private float distanceBetweenX;
    public float distanceBetweenMin;
    public float distanceBetweenMax;
    public float distanceBetweenMinX;
    public float distanceBetweenMaxX;

    //private float obstacleHeight;

    //public GameObject[] theObstacles;
    private int obstacleSelector;



    public ObjectPooler[] theObjectPools;

	// Use this for initialization
	void Start () {
        //obstacleHeight = theObstacle.GetComponent<EdgeCollider2D>().edgeRadius;
	}
	
	// Update is called once per frame
	void Update () {

        if(transform.position.y < generationPoint.position.y)
        {

            distanceBetween = Random.Range(distanceBetweenMin, distanceBetweenMax);
            distanceBetweenX = Random.Range(distanceBetweenMinX, distanceBetweenMaxX);

            transform.position = new Vector3(distanceBetweenX, transform.position.y + distanceBetween, transform.position.z);

            obstacleSelector = Random.Range(0, theObjectPools.Length);

            //Instantiate(/*theObstacle*/theObstacles[obstacleSelector], transform.position, transform.rotation);
            GameObject newObstacle = theObjectPools[obstacleSelector].GetPooledObject();

            newObstacle.transform.position = transform.position;
            newObstacle.transform.rotation = transform.rotation;
            newObstacle.SetActive(true);

        }


		
	}
}
