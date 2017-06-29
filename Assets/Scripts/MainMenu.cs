using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {

    public string playGameLevel;
    public string playExperimentalLevel;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void PlayGame()
    {
        //Application.LoadLevel(playGameLevel);
        SceneManager.LoadScene(playGameLevel);
    }

    public void PlayExperimentalGame()
    {
        //Application.LoadLevel(playGameLevel);
        SceneManager.LoadScene(playExperimentalLevel);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
