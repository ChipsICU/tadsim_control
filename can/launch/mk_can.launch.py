from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mk_can',
            namespace=None,
            executable='mk_can_node',
        )
    ])