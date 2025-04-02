using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SomeGuyControllerScript : MonoBehaviour
{
    public Transform RootBone;
    public Transform CenterOfBall;
    public float radius;
    public Transform LeftLegFoot;
    public Transform LeftLegPrevFoot;
    public Transform LeftLegPrevPrevFoot;
    public Transform RightLegFoot;
    public Transform RightLegPrevFoot;
    public Transform RightLegPrevPrevFoot;

    public int IndexLeftFoot;
    public int IndexRightFoot;

    public bool changedLeftFoot;
    public bool changedRightFoot;

    private Vector3 targetRootBonePosition;
    private Vector3 targetRootBonePositionVel;

    private Vector3 targetRootBoneUp;
    private Vector3 targetRootBoneUpVel;

    private Vector3 targetLeftFootPosition;
    private Vector3 targetLeftFootPositionVel;

    private Vector3 targetLeftFootPrevPosition;
    private Vector3 targetLeftFootPrevPositionVel;

    private Vector3 targetLeftFootPrevPrevPosition;
    private Vector3 targetLeftFootPrevPrevPositionVel;

    private Vector3 targetRightFootPosition;
    private Vector3 targetRightFootPositionVel;

    private Vector3 targetRightFootPrevPosition;
    private Vector3 targetRightFootPrevPositionVel;

    private Vector3 targetRightFootPrevPrevPosition;
    private Vector3 targetRightFootPrevPrevPositionVel;



    private float Moving;
    // Start is called before the first frame update
    void Start()
    {
        changedLeftFoot = true;
        changedRightFoot = true;
        targetRootBoneUpVel = Vector3.zero;
        targetRootBonePositionVel = Vector3.zero;
        targetRightFootPositionVel = Vector3.zero;
        targetLeftFootPositionVel = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        Moving -= Time.deltaTime;
        if(Moving > 0)
        {
            //RootBone.position = Vector3.SmoothDamp(RootBone.position, targetRootBonePosition, ref targetRootBonePositionVel, 1f);
            //RootBone.up = Vector3.SmoothDamp(RootBone.up, targetRootBoneUp, ref targetRootBoneUpVel, 1f);

            //LeftLegPrevPrevFoot.position = Vector3.SmoothDamp(LeftLegPrevPrevFoot.position, targetLeftFootPrevPrevPosition, ref targetLeftFootPrevPrevPositionVel, 1f);
            //LeftLegPrevFoot.position = Vector3.SmoothDamp(LeftLegPrevFoot.position, targetLeftFootPrevPosition, ref targetLeftFootPrevPositionVel, 1f);
            //LeftLegFoot.position = Vector3.SmoothDamp(LeftLegFoot.position, targetLeftFootPosition, ref targetLeftFootPosition, 1f);

            //RightLegPrevPrevFoot.position = Vector3.SmoothDamp(LeftLegPrevPrevFoot.position, targetLeftFootPrevPrevPosition, ref targetLeftFootPrevPrevPositionVel, 1f);
            //LeftLegPrevFoot.position = Vector3.SmoothDamp(LeftLegPrevFoot.position, targetLeftFootPrevPosition, ref targetLeftFootPrevPositionVel, 1f);
            //LeftLegFoot.position = Vector3.SmoothDamp(LeftLegFoot.position, targetLeftFootPosition, ref targetLeftFootPosition, 1f);
        }
    }

    public void PositionGuy(Vector3 ButtonOnePos, Vector3 ButtonTwoPos)
    {

        if (!changedLeftFoot && !changedRightFoot) return;
        Vector3 _midPoint = ButtonOnePos + ((ButtonTwoPos - ButtonOnePos) / 2f);
        targetRootBonePosition = _midPoint + (_midPoint - CenterOfBall.position).normalized * radius;
        targetRootBoneUp = (_midPoint - CenterOfBall.position).normalized;
        RootBone.position = targetRootBonePosition;
        RootBone.up = targetRootBoneUp;

        //need to change this 
        if (changedLeftFoot)
        {
            targetLeftFootPrevPrevPosition = ButtonOnePos + (ButtonOnePos - CenterOfBall.position).normalized * 5f;
            targetLeftFootPrevPrevPosition = targetLeftFootPrevPrevPosition + (LeftLegPrevPrevFoot.position - RootBone.position).normalized * 2f;
            
            targetLeftFootPrevPosition = ButtonOnePos + (ButtonOnePos - CenterOfBall.position).normalized * 2.5f;

            targetLeftFootPosition = ButtonOnePos;

            LeftLegPrevPrevFoot.position = targetLeftFootPrevPrevPosition;
            LeftLegPrevFoot.position = targetLeftFootPrevPrevPosition;
            LeftLegFoot.position = targetLeftFootPosition;
        }
        

        if (changedRightFoot)
        {
            targetRightFootPrevPrevPosition = ButtonTwoPos + (ButtonTwoPos - CenterOfBall.position).normalized * 5f;
            targetRightFootPrevPrevPosition = targetRightFootPrevPrevPosition + (RightLegPrevPrevFoot.position - RootBone.position).normalized * 2f;

            targetRightFootPrevPosition = ButtonTwoPos + (ButtonTwoPos - CenterOfBall.position).normalized * 2.5f;

            targetRightFootPosition = ButtonTwoPos;

            RightLegPrevPrevFoot.position = targetRightFootPrevPrevPosition;
            RightLegPrevFoot.position = targetRightFootPrevPrevPosition;
            RightLegFoot.position = targetRightFootPosition;
        }

        Moving = 2f;
       
    }
}
