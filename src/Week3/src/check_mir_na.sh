#! /bin/bash

source ../devel/setup.bash
{
gnome-terminal -t "start_core" -x bash -c "roscore"
sleep 2
gnome-terminal -t "start" -x bash -c "roslaunch mir_gazebo mir_maze_world.launch"
sleep 7
gnome-terminal -t "start" -x bash -c "rosservice call /gazebo/unpause_physics"
sleep 2   
gnome-terminal -t "start" -x bash -c "roslaunch mir_navigation amcl.launch initial_pose_x:=10.0 initial_pose_y:=10.0"
sleep 2   
gnome-terminal -t "start" -x bash -c "roslaunch mir_navigation start_planner.launch \
    map_file:=$(rospack find mir_gazebo)/maps/maze.yaml \
    virtual_walls_map_file:=$(rospack find mir_gazebo)/maps/maze_virtual_walls.yaml"
sleep 5   
gnome-terminal -t "start" -x bash -c "rviz -d $(rospack find mir_navigation)/rviz/navigation.rviz"   
}

