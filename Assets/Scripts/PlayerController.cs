using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public float moveSpeed;
    public float moveSpeed2;
    public float jumpForce;

    //Trigger for back and forth jump
    public bool trigger = false;

    private Rigidbody2D myRigidBody;

    public bool collision;
    public LayerMask whatIsWall;

    private Collider2D myCollider;

    // Use this for initialization
    void Start()
    {
        myRigidBody = GetComponent<Rigidbody2D>();
        myRigidBody.velocity = new Vector2(moveSpeed, myRigidBody.velocity.y);

        myCollider = GetComponent<Collider2D>();
    }

    // Update is called once per frame
    void Update()
    {
       
        collision = Physics2D.IsTouchingLayers(myCollider, whatIsWall);

        // myRigidBody.velocity = new Vector2(moveSpeed, myRigidBody.velocity.y);

        if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
        {
            myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce);
            // if (myRigidBody.velocity.x > 0)
            if (trigger)
            {

               
                myRigidBody.velocity = new Vector2(moveSpeed2, myRigidBody.velocity.y);
                trigger = false;
            }
            else
            {
                
                myRigidBody.velocity = new Vector2(moveSpeed, myRigidBody.velocity.y);
                trigger = true;
            }
        }
    }
}
