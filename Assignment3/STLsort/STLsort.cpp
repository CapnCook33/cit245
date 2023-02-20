/* CIT-245 Assignment 3.1 - Sort random numbers using STL sort.
 * Jon Cook
 * Prof. K. Moore
 * 2023/02/14
 */

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include <iostream>

using namespace std;

int main() {

    bool runAgain;
    int ogArray[20];
    int newArray[11] = {0};
    int uChoice, z;
    srand(time(0));

    cout << "This program generates random numbers, sorts them and shows the results.\n";

    runAgain = true;
    do{
        cout << "The original array contains:\n";
        for(int i = 0; i <= 30; i++){//Try <= in VS, also 30.
            ogArray[i] = (rand() % 10) + 1;
            cout << ogArray[i] << " ";
        } //Works.

        sort(ogArray, ogArray+20);
        cout << endl;

        cout.width(20); cout << left << "Index Spot:";
        cout.width(15); cout << left << "Sorted Values:";
        cout << endl;

        for(int j = 0; j < 20; j++){
            while(j < 10){
                cout << "ogArray[ " << j << "]:";
                cout.width(10); cout << right << ogArray[j] << endl;
                break;
            }
            while(j >= 10) {
                cout << "ogArray[" << j << "]:";
                cout.width(10); cout << right << ogArray[j] << endl;
                break;
            } // I did it this way just for formatting.
        } //Works to here.

        cout << endl;
        for (int k = 0; k < 20; k++){
            cout << ogArray[k] << " ";
        }
        cout << endl;

        cout.width(20); cout << left << "N Count:";
        cout << endl;
        cout << endl;
        //Code for N count and occurrence goes here.
        for (int x = 0; x < 10; x++){
            for (int y = 0; y < 20; y++){
                if (ogArray[y] == x+1){
                    newArray[x]++;
                }
            }
            cout << newArray[x] << endl;
        }
        cout << endl;

        cout << endl;
        cout << "Do you want to do more? Press 1 for yes, 0 (zero) for no.\n";
        cin >> uChoice;
        if (uChoice == 0){
            runAgain = false;
        }
    } while(runAgain);

    return 0;
}
