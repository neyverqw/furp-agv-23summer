#! /usr/bin/env python

import rospy
from communication.msg import Twonumber

def addfun(two_num):
    rospy.loginfo("The sum: %d", two_num.first_num + two_num.second_num)



if __name__ == "__main__":
    rospy.init_node("listener_cal")
    sub = rospy.Subscriber("Two_num", Twonumber, addfun, queue_size=10)
    rospy.spin()