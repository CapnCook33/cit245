/*CIT-245 Assignment 1 - Babylon Square Root
 * Jon Cook
 * Prof. K. Moore
 * 2023/01/29
 */

#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std; //Should I do it this way? Some sites say no, our book says yes.

int main() {
    double userNumber, iGuess, sRoot, total;
    float accuracy = .0001;
    int uChoice;
    bool runAgain;

    runAgain = true;
    while(runAgain) {
        cout << "Enter a number and I'll apply the Babylonian square root algorithm \n"
             << "until I'm within .001 of the correct answer. \n";

        cin >> userNumber;
        cout << "You entered: " << userNumber << endl;

        iGuess = userNumber / 2.0;
        cout << "My guess is: " << iGuess << endl;

        while (iGuess - sRoot > accuracy) {
            sRoot = userNumber / iGuess;
            iGuess = (iGuess + sRoot) / 2.0;
            cout << "Next guess: " << iGuess << endl;
        } //while loop for calculation and printing.

        cout << endl;
        cout << "According to the Babylonians method, the answer is: " << iGuess << endl;
        //Works to here.

        total = iGuess * iGuess; //Tried this to get the decimal point, still no dice.
        cout << "Checking our work: " << iGuess << " * " << iGuess << " = " << total << endl;
        //end of the programs main body, just the continuation loop after this.

        cout << endl;
        cout << "Do you want to do another?\n"
        << "Press 1 to calculate another. Press 0 (zero) to Exit.\n";
        cin >> uChoice;
        cout << endl;

        if(uChoice == 0){
            runAgain = false;
        }
    }

    system("pause");
    return 0;
}
