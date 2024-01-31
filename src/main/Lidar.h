#pragma once

#include <iostream>

class Lidar {
    public:
        Lidar(int, int);
        int getLidarName();

    private:
        int motorSpeed;
        int lidarName;
};