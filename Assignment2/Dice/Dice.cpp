/* CIT-245 Assignment 2.1 - Dice
 * Jon Cook
 * Prof. K. Moore
 * 2023/02/09
 */

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<algorithm>

using namespace std;

int Roll();

int main() {
    bool runAgain;
    int rolls[11];
    int uChoice, uTrials, dieSum;
    double rollStd, oddsMulti, pError, countOdds;

    srand(time(0)); //Do this here, not inside the Roll function.

    cout << "This program rolls two dice and prints the outcome.\n";

    runAgain = true;
    while(runAgain){

        int a = 5;
        std::fill_n(rolls, 11, 0);//Clearing array for more trials.
        cout << "Enter the number of times you want to roll: \n";
        cin >> uTrials;
        oddsMulti = uTrials/36.00;

        for (int i = 0; i < uTrials; i++){
            dieSum = Roll();
            rolls[dieSum-2]++; //Correct index position with this.
        } //Rolling # of times user specifies.

        cout.width(20); cout << left << "Die Total:";
        cout.width(20); cout << left << "#Rolled:";
        cout.width(20); cout << left << "Odds:";
        cout.width(20); cout << left << "%Error:";
        cout << endl; //prints header of each column.

        for (int x = 0; x < 11; x++){ //prints to fill each column.
            cout.width(20); cout << left << x+2;
            cout.width(20); cout << left << rolls[x];
            if(x <= 5){ //prints to fill the "odds" column.
                rollStd = (x+1)*oddsMulti;
                pError = ((rollStd-rolls[x]) / rolls[x]) * 100;
                cout.width(20); cout << left << rollStd;
                cout.width(20); cout << left << fabs(pError) << endl;
            }
            else if(x >= 6){
                rollStd = a*oddsMulti;
                pError = ((rollStd-rolls[x]) / rolls[x]) * 100;
                cout.width(20); cout << left << rollStd;
                cout.width(20); cout << left << fabs(pError) << endl;
                a--;
            } //Long-winded, but it works.
        }

        cout << endl;
        cout << "Do you want to play again? Press 1 for yes, 0 (zero) for no.\n";
        cin >> uChoice;
        if(uChoice == 0){
            runAgain = false;
        }
    }
    return 0;
}

int Roll (){ //Works, don't touch it.
    int die1, die2, dieTotal;

    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    dieTotal = die1 + die2;
    return dieTotal;
}