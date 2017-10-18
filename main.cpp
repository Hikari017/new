#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {

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
    cout << distance1 << endl;
    cout << distance2 << endl;
    cout << "--------------------------------" << endl;
    if (distance1 > distance2) {

        cout << "Ta trasa  ma mniej km do pokonania" << endl;

    } else {
        cout << "Ta trasa  ma wiecej km do pokonania" << endl;


    }
    return 0;
}