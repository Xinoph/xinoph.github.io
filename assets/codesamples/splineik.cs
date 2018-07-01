...
// Move root joint to start of spline + offset
offset = Mathf.Clamp(offset, 0, splineComp.pointsAlongSpline.Count-numJoints);
transform.position = splineComp.pointsAlongSpline[offset];

// Go through rest of chain and move those
if (weightedSplineLength) {
    runningJointLength = 0;
    float runningSplineLength = 0;
    for (int j=1;j<jointChain.Count;j++) {
        GameObject prevJoint = jointChain[j-1];
        currentJoint = jointChain[j];
        // For each joint, aim it towards the point in the spline that is at the same % of the whole length
        // A joint at 50% of the joint chain length will aim towards 50% of the spline length
        float lenSpline = splineComp.Length(offset);
        runningJointLength += jointLengths[j];
        runningSplineLength = 0;
        int indexClosest;
        for (indexClosest=offset+1;indexClosest<splineComp.pointsAlongSpline.Count;indexClosest++) {
            if (runningJointLength / lenJoints > (runningSplineLength + 
                splineComp.DistanceBtwnPoints(indexClosest, indexClosest-1)) / lenSpline) {
                runningSplineLength += splineComp.DistanceBtwnPoints(indexClosest, indexClosest-1);
            }
            else {
                break;
            }
        }
        indexClosest = Mathf.Min(indexClosest, splineComp.pointsAlongSpline.Count-1);
        Vector3 closestPoint = splineComp.pointsAlongSpline[indexClosest];
        Quaternion angOffset = jointAngOffsets[j-1];
        moveJoint(currentJoint, prevJoint, jointLengths[j], closestPoint, angOffset);
    }
}
else {
    int indexClosest = offset;
    for (int j=1;j<jointChain.Count;j++) {
        GameObject prevJoint = jointChain[j-1];
        currentJoint = jointChain[j];
        // Find the point along the spline that the joint has the closest "reach" to
        // Don't go backwards in the spline though
        for (int i=indexClosest;i<splineComp.pointsAlongSpline.Count;i++) {
            float dist = Vector3.Distance(prevJoint.transform.position, splineComp.pointsAlongSpline[i]);
            if ( Mathf.Abs(jointLengths[j] - dist) < Mathf.Abs(jointLengths[j] - 
                Vector3.Distance(prevJoint.transform.position, splineComp.pointsAlongSpline[indexClosest])) ) {
                indexClosest = i;
            }
        }
        Vector3 closestPoint = splineComp.pointsAlongSpline[indexClosest];
        Quaternion angOffset = jointAngOffsets[j-1];
        moveJoint(currentJoint, prevJoint, jointLengths[j], closestPoint, angOffset);
    }
}
...