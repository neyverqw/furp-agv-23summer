#! /usr/bin/env python

import rospy
import random
from communication.msg import Twonumber
if __name__ == "__main__":
    rospy.init_node("talker_cal")
    pub = rospy.Publisher("Two_num", Twonumber, queue_size=10)

    two_num = Twonumber()
    rate = rospy.Rate(1)
    while not rospy.is_shutdown():
        two_num.first_num = random.randint(1,10)
        two_num.second_num = random.randint(1,10)
        pub.publish(two_num)
        rospy.loginfo("Random two number: %d %d", two_num.first_num, two_num.second_num)
        rate.sleep()