using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 euler = transform.localEulerAngles;
        euler.z += 2f;
        transform.localEulerAngles = euler;
    }
}

