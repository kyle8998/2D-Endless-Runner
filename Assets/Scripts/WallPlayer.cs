using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallPlayer : MonoBehaviour
{

    public float moveSpeedLeft;
    public float moveSpeedRight;
    public float moveSpeedUp;
    public float jumpForce;
    public float maxSpeed;

    //Trigger for back and forth jump
    public bool trigger = false;

    private Rigidbody2D myRigidBody;

    public bool collision;
    public bool hit;
    public LayerMask whatIsWall;
    public LayerMask whatIsObstacle;

    private Collider2D myCollider;

    // Use this for initialization
    void Start()
    {
        myRigidBody = GetComponent<Rigidbody2D>();
        trigger = true;

        myCollider = GetComponent<Collider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        // Constant upwards velocity
        myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, moveSpeedUp);
        collision = Physics2D.IsTouchingLayers(myCollider, whatIsWall);
        hit = Physics2D.IsTouchingLayers(myCollider, whatIsObstacle);

        // myRigidBody.velocity = new Vector2(moveSpeed, myRigidBody.velocity.y);

        if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
        {

            //myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce);
            // if (myRigidBody.velocity.x > 0)
            //myRigidBody.velocity = new Vector2((float)0.0, myRigidBody.velocity.y);

            if (trigger)
            {
                //myRigidBody.AddForce(new Vector2((float)-150.0, myRigidBody.velocity.y));

                //To counteract the high velocity - Prevents too much slide
                if (myRigidBody.velocity.x > 5)
                {
                    myRigidBody.velocity = new Vector2((float)5.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x > 3)
                {
                    myRigidBody.velocity = new Vector2((float)3.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x > 1)
                {
                    myRigidBody.velocity = new Vector2((float)1.0, myRigidBody.velocity.y);
                }
                else
                {
                    myRigidBody.velocity = new Vector2((float)0.0, myRigidBody.velocity.y);
                }
                trigger = false;
            }
            else
            {
                //myRigidBody.AddForce(new Vector2((float)150.0, myRigidBody.velocity.y));
                if (myRigidBody.velocity.x < -5)
                {
                    myRigidBody.velocity = new Vector2((float)-5.0, myRigidBody.velocity.y);
                }
                else if(myRigidBody.velocity.x < -3)
                {
                    myRigidBody.velocity = new Vector2((float)-3.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x < -1)
                {
                    myRigidBody.velocity = new Vector2((float)-1.0, myRigidBody.velocity.y);
                }
                else
                {
                    myRigidBody.velocity = new Vector2((float)0.0, myRigidBody.velocity.y);
                }
                
                trigger = true;
            }

        }

        if (trigger)
        {
     
            myRigidBody.AddForce(new Vector2(moveSpeedRight, myRigidBody.velocity.y));
        }
        else
        {
            myRigidBody.AddForce(new Vector2(moveSpeedLeft, myRigidBody.velocity.y));
        }

        //if (Mathf.Abs(myRigidBody.velocity.x) > maxSpeed)
        //{
        //    speedTrigger = true;
        //}
    }
}
