#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    double bbLat = 49.818382;
    double bbLong = 19.047217;

    double czechowiceLat = 49.887794;
    double czechowiceLong = 18.996358;

    double oswiecimLat = 50.037794;
    double oswiecimLong = 19.208216;

    double ketyLat = 49.880000;
    double ketyLong = 19.218328;


    double distance1 = sqrt(pow(bbLat - ketyLat - oswiecimLat, 2));
    double distance2 = sqrt(pow(bbLat - czechowiceLat - oswiecimLat, 2));
    std::cout <<   distance1  << std::endl;
    std::cout <<   distance2  << std::endl;
    std::cout <<   "--------------------------------" << std::endl;
    if (distance1>distance2){

        std::cout << "Ta trasa  ma mniej km do pokonania" << std::endl;

    } else{
        std::cout << "Ta trasa  ma wiecej km do pokonania" << std::endl;

    }
    return 0;
}