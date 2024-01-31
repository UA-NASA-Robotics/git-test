#include <iostream>
#include "Lidar.h"

int x;

//both readLidar and lidar are called "methods" these are basically functions that are specific to a class

int main() {
    std::cout << "Please enter Lidar device name: ";
    std::cin >> x;
    Lidar lidar1(2, x);
    std::cout << lidar1.getLidarName() << std::endl;
    return 0;
}