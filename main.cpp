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


    double distanceAcrossCzechLat = bbLat - czechowiceLat - oswiecimLat;
    double distanceAcrossCzechLong = bbLong - czechowiceLong - oswiecimLong;

    double distanceAcrossKetyLat = bbLat - ketyLat - oswiecimLat;
    double distanceAcrossKetyLong = bbLong - ketyLong - oswiecimLong;


    double distanceAcrossCzech = sqrt(pow(distanceAcrossCzechLat,2) +
                                      pow(distanceAcrossCzechLong,2));

    double distanceAcrossKety = sqrt(pow(distanceAcrossKetyLat,2) +
                                     pow(distanceAcrossKetyLong,2));


    cout << "Dystans BB-CZECHOWICE-OSWIECIM ma dlugosc: " << distanceAcrossCzech << " km" << endl;
    cout << "Dystans BB-KETY-OSWIECIM ma dlugosc: " << distanceAcrossKety << " km" << endl;

    if (distanceAcrossCzech < distanceAcrossKety) {

        cout  <<"Trasa BB-CZECHOWICE-OSWIECIM  ma mniej km do pokonania" << endl;

    } else {
        cout << "Trasa BB-KETY-OSWIECIM  ma wiecej km do pokonania" << endl;


    }
    return 0;
}