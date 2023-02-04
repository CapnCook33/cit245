/* CIT-245 Assignment 1.2 - Buoyant Force Calculator
 * Jon Cook
 * Prof. K. Moore
 * 2023/01/30
 */

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

int main(){
    double bForce, sVolume, uWeight, uRadius;
    double radCubed;
    const double pI = 3.141592;
    const double watWeight = 62.4;
    bool runAgain;
    int uChoice;

    cout << "This program will compute Buoyant Force in water given a spheres radius and weight.\n"
    << "Based on the weight of the sphere, it determines if the sphere will float or sink.\n";

    runAgain = true;
    while(runAgain) {
        cout << "Enter the radius of the sphere.\n";
        cin >> uRadius;
        radCubed = uRadius*uRadius*uRadius; //Doing this here in hopes it'll be cleaner.
        cout << "Enter the weight of the sphere.\n";
        cin >> uWeight;
        cout << "The radius entered is " <<uRadius<< " and the weight entered is " <<uWeight<< endl;

        sVolume = ((4.0/3.0) * pI) * radCubed;
        cout <<"The sphere volume is: " <<sVolume<< endl;
        bForce = sVolume * watWeight;
        cout << "The Buoyant Force is: " <<bForce<< endl;
        if(uWeight > bForce){
            cout << "It sinks...\n";
        }
        else{
            cout << "Great Scott! It floats!\n";
        }

        cout << endl;
        cout <<"Do you want to recalculate?\n"
        <<"Enter 1 to calculate another. Enter 0 (zero) to exit.\n";
        cin >> uChoice;

        if(uChoice == 0){
            runAgain = false;
        } //Bingo bango.
    }
    system("pause");
    return 0;
}