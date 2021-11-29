## Project_ROCR
[![License:MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://github.com/markosej11/turtlebot3_walker/LICENSE)

Walker Algorithm implementation for the Turtlebot 3 in Gazebo

## Authors
Markose Jacob - markj11@terpmail.umd.edu (Graduate Student in Robotics at the University of Maryland College Park, Dec 2021)

## License 
MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

## Overview
This ROS package implements a walker algorithm (similar to a Roomba robot vacuum cleaner) for the Turtlebot 3 in Gazebo. The robot moves forward until it reaches an obstacle (but not colliding), then rotates in place until the way ahead is clear, then moves forward again and repeats.

## Requirements
* catkin
* ROS melodic
* Ubuntu 18.04

## Build Instructions
```
$ mkdir -p ~/catkin_ws/src
$ cd ~/catkin_ws/src
$ git clone --recursive https://github.com/markosej11/turtlebot3_walker.git
$ source devel/setup.bash
$ cd ..
$ catkin_make
$ source ~/catkin_ws/devel/setup.bash
```

## Running Instructions
```
roslaunch turtlebot3_walker walker.launch 
```
The above command will start the simulation without rosbags 
```
roslaunch turtlebot3_walker walker.launch record:=true
```
The above command will start the simulation with rosbags (rosbags will record for 20 seconds)

## To inspect the bag file
Start roscore on first terminal
```
roscore
```
On a second terminal navigate to the directory which contains the bag file
```
cd ~/catkin_ws/src/turtlebot3_walker/results/bags
```
To inspect the file run the below command
```
rosbag info sample.bag 
```