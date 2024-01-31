#include "Lidar.h"

Lidar::Lidar(int setMotorSpeed, int setLidarName) {
    std::cout << "You have created a new Lidar object!\n";
    motorSpeed = setMotorSpeed;
    lidarName = setLidarName;
}

int Lidar::getLidarName() {
    return lidarName;
}