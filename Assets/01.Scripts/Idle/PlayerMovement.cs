using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerMovement : MonoBehaviour
{

    [SerializeField] Animator animator;
    [SerializeField] FixedTouchField touchField;
    [SerializeField] private NavMeshAgent agent;

    private Vector3 moveDir;
    private float angle;
    public float moveSpeed;


    void Update()
    {
        moveDir = touchField.joystickDir.normalized * touchField.distBetweenJoystickBodyToHandle;

        float nomalizeMoveSpeed = touchField.distBetweenJoystickBodyToHandle;

        var delta = new Vector3(moveDir.x, 0, moveDir.y) * (moveSpeed) * Time.deltaTime;
        agent.Move(delta);

        if (nomalizeMoveSpeed == 0)
        {
            animator.SetBool("Move", false);
        }
        else
        {
            animator.SetBool("Move", true);
            // animator.SetFloat("MoveAnimationSpeed", nomalizeMoveSpeed);
        }

        if (Mathf.Abs(touchField.joystickDir.normalized.x) > 0 || Mathf.Abs(touchField.joystickDir.normalized.y) > 0)
        {
            angle = Mathf.Atan2((touchField.joystickDir.normalized.y + transform.position.y) - transform.position.y,
            (touchField.joystickDir.normalized.x + transform.position.x) - transform.position.x) * Mathf.Rad2Deg;
        }

        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.AngleAxis(angle - 90, Vector3.down), 10 * Time.deltaTime);
    }
}
