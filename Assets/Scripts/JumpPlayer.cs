using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpPlayer : MonoBehaviour
{

    public float moveSpeedLeft;
    public float moveSpeedRight;
    public float moveSpeedUp;
    

    public float speedMultiplier;
    public float speedIncreaseMilestone;
    private float speedMilestoneCount;
    public float speedCap;


    private float moveSpeedUpStore;
    private float speedMilestoneCountStore;
    private float speedIncreaseMilestoneStore;

    //public float jumpForce;
    public float maxSpeed;

    //Trigger for back and forth jump
    public bool trigger = false;

    private Rigidbody2D myRigidBody;

    public bool collision;
    public bool hit;
    public LayerMask whatIsWall;
    public LayerMask whatIsObstacle;

    private Collider2D myCollider;

    public GameManager theGameManager;

    public AudioSource tapSound;
    public AudioSource deathSound;

    // Use this for initialization
    void Start()
    {
        myRigidBody = GetComponent<Rigidbody2D>();
        trigger = true;

        myCollider = GetComponent<Collider2D>();

        speedMilestoneCount = speedIncreaseMilestone;

        moveSpeedUpStore = moveSpeedUp;
        speedMilestoneCountStore = speedMilestoneCount;
        speedIncreaseMilestoneStore = speedIncreaseMilestone;
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.y > speedMilestoneCount && moveSpeedUp < speedCap)
        {
            speedMilestoneCount += speedIncreaseMilestone;
            speedIncreaseMilestone = speedIncreaseMilestone * speedMultiplier;
            moveSpeedUp *= speedMultiplier;
            if (moveSpeedUp > speedCap)
            {
                moveSpeedUp = speedCap;
            }
        }

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
            tapSound.Play();
            if (trigger)
            {

                //myRigidBody.AddForce(new Vector2((float)-150.0, myRigidBody.velocity.y));

                //To counteract the high velocity - Prevents too much slide
                if (myRigidBody.velocity.x > 5)
                {
                    myRigidBody.velocity = new Vector2((float)3.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x > 3)
                {
                    myRigidBody.velocity = new Vector2((float)2.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x > 1)
                {
                    myRigidBody.velocity = new Vector2((float)1.0, myRigidBody.velocity.y);
                }
                else
                {
                    myRigidBody.velocity = new Vector2((float)0.0, myRigidBody.velocity.y);
                }
                // myRigidBody.velocity = new Vector2((float)0.0, myRigidBody.velocity.y);
                myRigidBody.AddForce(new Vector2(-300, myRigidBody.velocity.y));
                trigger = false;
            }
            else
            {
                //myRigidBody.AddForce(new Vector2((float)150.0, myRigidBody.velocity.y));
                if (myRigidBody.velocity.x < -5)
                {
                    myRigidBody.velocity = new Vector2((float)-3.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x < -3)
                {
                    myRigidBody.velocity = new Vector2((float)-2.0, myRigidBody.velocity.y);
                }
                else if (myRigidBody.velocity.x < -1)
                {
                    myRigidBody.velocity = new Vector2((float)-1.0, myRigidBody.velocity.y);
                }
                else
                {
                    myRigidBody.velocity = new Vector2((float)0.0, myRigidBody.velocity.y);

                }
                myRigidBody.AddForce(new Vector2(300, myRigidBody.velocity.y));
                trigger = true;
            }

        }

                if (trigger)
                {
                    if (Mathf.Abs(myRigidBody.velocity.x) < maxSpeed / 2)
                        myRigidBody.AddForce(new Vector2(moveSpeedRight, myRigidBody.velocity.y));

                    else if (Mathf.Abs(myRigidBody.velocity.x) < maxSpeed)
                        myRigidBody.AddForce(new Vector2(moveSpeedRight / 2, myRigidBody.velocity.y));
                }
                else
                {
                    if (Mathf.Abs(myRigidBody.velocity.x) < maxSpeed / 2)
                        myRigidBody.AddForce(new Vector2(moveSpeedLeft, myRigidBody.velocity.y));

                    else if (Mathf.Abs(myRigidBody.velocity.x) < maxSpeed)
                        myRigidBody.AddForce(new Vector2(moveSpeedLeft / 2, myRigidBody.velocity.y));
                }
            
        
        //if (Mathf.Abs(myRigidBody.velocity.x) > maxSpeed)
        //{
        //    speedTrigger = true;
        //}
    }


    void OnCollisionEnter2D (Collision2D other)
    {
        if (other.gameObject.tag == "killbox")
        {
            deathSound.Play();
            theGameManager.RestartGame();
            moveSpeedUp = moveSpeedUpStore;
            speedMilestoneCount = speedMilestoneCountStore;
            speedIncreaseMilestone = speedIncreaseMilestoneStore;
        }
    }
}
