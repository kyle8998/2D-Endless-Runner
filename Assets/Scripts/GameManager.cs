using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

    public Transform obstacleGenerator;
    private Vector3 obstacleStartPoint;

    public PlayerController thePlayer;
    private Vector3 playerStartPoint;

    private ObstacleDestroyer[] obstacleList;

    private ScoreManager theScoreManager;

	// Use this for initialization
	void Start () {
        obstacleStartPoint = obstacleGenerator.position;
        playerStartPoint = thePlayer.transform.position;

        theScoreManager = FindObjectOfType<ScoreManager>();
	}
	
	// Update is called once per frame
	void Update () {
	
        
	}

    public void RestartGame ()
    {
        StartCoroutine("RestartGameCo");
    }
    //Coroutine
    public IEnumerator RestartGameCo()
    {
        theScoreManager.scoreIncreasing = false;
        //deactivate and wait
        thePlayer.gameObject.SetActive(false);
        yield return new WaitForSeconds(0.5f);
        obstacleList = FindObjectsOfType<ObstacleDestroyer>();
        //deactivate all obstacles
        for (int i = 0; i < obstacleList.Length; i++)
        {
            obstacleList[i].gameObject.SetActive(false);
        }
        thePlayer.transform.position = playerStartPoint;
        obstacleGenerator.position = obstacleStartPoint;
        //Set rotation back to 0
        thePlayer.transform.rotation = Quaternion.identity;
        thePlayer.gameObject.SetActive(true);
        theScoreManager.scoreCount = 0;
        theScoreManager.scoreIncreasing = true;
    }

}
