/* CIT-245 - Assignment 2.2 - Reducing fractions with GCD.
 * Jon Cook
 * Prof. K. Moore
 * 2023/02/11
 */

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include <iostream>

using namespace std;

int gcd(int a, int b);
void reduce(int& a, int& b);
int main() {

    bool runAgain;
    int uChoice, nume, den, g, r;


    cout << "This program takes a numerator and denominator and reduces to lowest terms.\n";
    do{
        cout << "Enter a numerator: \n";
        cin >> nume;
        cout << "Enter a denominator: \n";
        cin >> den;


        cout << "The numerator is: " << nume << endl;
        cout << "The denominator is: " << den << endl;

        g = gcd(nume, den);
        cout << "The GCD is: " << g << endl;
        cout << "The reduced fraction is: ";
        reduce(nume, den);
        cout << endl;


        cout << "Do you want to enter another number? Enter 1 for yes, 0 (zero) for no.\n";
        cin >> uChoice;
        if(uChoice == 0){
            runAgain = false;
        }
    } while(runAgain);

    return 0;
}

int gcd(int a, int b){
    while(b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void reduce (int& a, int& b){
    int g = gcd(a, b);
    a = a/g;
    b = b/g;

    cout << a;
    cout << "/";
    cout << b << endl;
}