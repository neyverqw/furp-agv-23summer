#! /usr/bin/env python

import rospy
import random
from communication.srv import two_number, two_numberRequest, two_numberResponse

if __name__ == "__main__":
    rospy.init_node("addints_client_p")
    client = rospy.ServiceProxy("AddInt",two_number)
    req = two_numberRequest()
    rate = rospy.Rate(1)    
    while not rospy.is_shutdown():
        req.num1 = random.randint(1,10)
        req.num2 = random.randint(1,10)
        resp = client.call(req)
        rospy.loginfo("sum: %d",resp.sum)      
        rate.sleep()