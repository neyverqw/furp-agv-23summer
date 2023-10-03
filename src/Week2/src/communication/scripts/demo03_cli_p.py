#! /usr/bin/env python

import rospy
from turtlesim.srv import TeleportAbsolute, TeleportAbsoluteRequest, TeleportAbsoluteResponse
from turtlesim.msg import Pose
import sys

# def doPose(data):
#     rospy.loginfo("乌龟坐标:x=%.2f, y=%.2f,theta=%.2f",data.x,data.y,data.theta)


if __name__ == "__main__":
    if len(sys.argv) != 3:
        rospy.logerr("Need two parameters X and Y")
        sys.exit(1)

    rospy.init_node("set_turtle_p")

    client = rospy.ServiceProxy("/turtle1/teleport_absolute",TeleportAbsolute)
    client.wait_for_service()
#    sub = rospy.Subscriber("/turtle1/pose",Pose,doPose,queue_size=1000)
    req = TeleportAbsoluteRequest()
    req.x = float(sys.argv[1])
    req.y = float(sys.argv[2])
    req.theta = 0.0
    response = client.call(req)
# shao@X:~$ rosservice info /turtle1/teleport_absolute                           │
# Node: /turtle_GUI                                                              │
# URI: rosrpc://X:38359                                                          │
# Type: turtlesim/TeleportAbsolute                                               │
# Args: x y theta                                                                │
# shao@X:~$ rossrv show turtlesim/TeleportAbsolute                               │
# float32 x                                                                      │
# float32 y                                                                      │
# float32 theta                                                                  │
# ---                           
