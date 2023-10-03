#! /usr/bin/env python

import rospy
from communication.srv import two_number, two_numberRequest, two_numberResponse
def doReq(req):
    sum = req.num1 + req.num2
    rospy.loginfo("req_num1 = %d, req_num2 = %d, sum = %d", req.num1, req.num2, sum)
    resp = two_numberResponse(sum)
    return resp


if __name__ == "__main__":
    rospy.init_node("addints_server_p")
    server = rospy.Service("AddInt",two_number,doReq)
    rospy.spin()
