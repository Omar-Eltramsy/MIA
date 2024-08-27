#!/usr/bin/env python3
import rospy
from std_msgs.msg import String
if __name__=="__main__":
    rospy.init_node("talker",anonymous=True)
    rospy.loginfo("Node has been started.")
    pub=rospy.Publisher("chat",String,queue_size=10)
    rate=rospy.Rate(1)
    while not rospy.is_shutdown():
        hello_string="Hello world"
        rospy.loginfo("hello")
        pub.publish(hello_string)
        rate.sleep()
        