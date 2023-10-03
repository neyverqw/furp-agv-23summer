# FURP 22-23 AGV 

## Description

Tianxiang's 2023 summer FURP 

## Basic Environment 

1. Ubuntu 20.04  
    - Basic ideas for shell and bash
2. ROS1 
    - Finish the first 21 tutorials 
3. Drivers
    - According to different environment documents, some basic drivers such as CUDA need to be installed first.

## Simulation 
Nvidia Isaac Sim: [download](https://www.nvidia.com/en-us/omniverse/download/)

## Vision
YOLOv8: [yolov8](https://ultralytics.com/yolov8)

## Weekly task 
Do the literature review each week.  

### Week 1 

- Finish basic environment install.

- Simulation: According to Isaac Sim's [document](https://docs.omniverse.nvidia.com/app_isaacsim/app_isaacsim/overview.html) install and try the basic use.

- CV: According to [GitHub](https://github.com/ultralytics/ultralytics) clone the project and try basic use.

### Week 2

- Finish all ROS beginner tutorials, must make sure your codes can work. Results should be shown in your report.
    - task1: in a publisher, randomly generate 2 numbers per 10 seconds, use listener to get data, an use server-client to get result of num1 + num2. Any case can show you can use server-client and publisher-listener is fine. 

    - task2: you have already tried the demo turtle. make a demo to control the turtle that user can input the coordinates and the turtle can go to the coordinate, also user can use keyboard to control the turtle moving. 
    
- Simulation: If your PC can use Issac Sim, try the tutorials. If cannot, install [Gazebo](https://gazebosim.org/home) and try the tutorials. These two simulation all can use ROS to communication.

- CV: Train and test yolov8 with a public dataset (e.g. cifar10). Results should be shown in your report. 

### Week 3

- Mir [Task](https://github.com/Fuhua-Bot/mir_robot). Make your workspace and git clone the repo to your src. Follow ROS Learning/Lesson 1/lesson1.md


## Submissions

1. Use csprojects
   - you have already learnt git in the SE module, use it efficiently
   - in the group create your own branch with your name
2. each week submit a weekly report [demo](./doc/report/Week_report_sample.md)
   - show your work on the project: what you have learnt and what you have done 
   - literature review (at least one )


