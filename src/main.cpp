#include <ros/ros.h>
#include "../include/walker.hpp"

int main(int argc, char** argv) {
    ros::init(argc, argv, "walker");
    ros::NodeHandle node;
    hw13::Walker walker(node);
}