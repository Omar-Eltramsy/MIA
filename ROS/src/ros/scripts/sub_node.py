#!/usr/bin/env python3
import rospy
from std_msgs.msg import String
def chat_callback(data):
    rospy.loginfo("I heard "+data.data)
if __name__=="__main__":
    rospy.init_node("listener",anonymous=True)
    rospy.loginfo("Node has been started.")
    sub=rospy.Subscriber("chat",String,chat_callback)
    rospy.spin()