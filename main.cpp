//
// Created by Justyna on 18.10.2017.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    double bbLat=49.818382;
    double bbLong=19.047217;

    double andryLat= 49.853823;
    double andryLong= 19.341640;

    double zyLat= 49.688661;
    double zyLong= 19.182926;

    double distance = sqrt(pow(bbLat-andryLat,2));
    std::cout << distance << std::endl;
    return 0;
}