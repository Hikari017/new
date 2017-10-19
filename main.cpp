#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // ========== Dane ========== //
    double bbLat = 49.818382;
    double bbLong = 19.047217;

    double czechowiceLat = 49.887794;
    double czechowiceLong = 18.996358;

    double oswiecimLat = 50.037794;
    double oswiecimLong = 19.208216;

    double ketyLat = 49.880000;
    double ketyLong = 19.218328;

    // ========== Obliczanie wektorów pomiędzy miejscowościami ========== //

    double bbToCzechLat = czechowiceLat - bbLat;
    double bbToCzechLong = czechowiceLong - bbLong;

    double czechToOswLat = oswiecimLat - czechowiceLat;
    double czechToOswLong = oswiecimLong - czechowiceLong;

    double bbToKetyLat = ketyLat - bbLat;
    double bbToKetyLong = ketyLong - bbLong;

    double ketyToOswLat = oswiecimLat - ketyLat;
    double ketyToOswLong = oswiecimLong - ketyLong;

    // ========== Obliczanie długości tych wektorów ========== //

    double bbToCzechDistance = sqrt(pow(bbToCzechLat, 2) + pow(bbToCzechLong, 2));
    double czechToOswDistance = sqrt(pow(czechToOswLat, 2) + pow(czechToOswLong, 2));
    double bbToKetyDistance = sqrt(pow(bbToKetyLat, 2) + pow(bbToKetyLong, 2));
    double ketyToOswDistance = sqrt(pow(ketyToOswLat, 2) + pow(ketyToOswLong, 2));



    if (bbToCzechDistance + czechToOswDistance > bbToKetyDistance + ketyToOswDistance) {
        cout << "Trasa BB-CZECHOWICE-OSWIECIM  ma wiecej km do pokonania" << bbToCzechDistance+czechToOswDistance<<endl;
    }
    else {
        cout << "Trasa BB-CZECHOWICE-OSWIECIM  ma mniej km do pokonania" << endl;
    }

    return 0;
}