/* CIT-245 Assignment 3.2 - Player class.
 * Jon Cook
 * Prof. K. Moore
 * 2023/02/16
 */

#pragma warning(disable: 4996)
#include<string>
#include<stdlib.h>
#include<time.h>
#include <iostream>

using namespace std;

class Player{
public:
    void setXp(int newXp);
    int getXp();
    void setLocx(int newLocx);
    int getLocx();
    void setLocy(int newLocy);
    int getLocy();
    void setName(string& newName);
    string getName();
    void setPassword(string& newPassword);
    string getPassword();
    void setInv(string& item1, string& item2, string& item3, string& item4);
    string *getInv();
private:
    int xp, locX, locY;
    string name, password;
    string inventory[4];
};

void Player::setXp(int newXp){
    xp = newXp;
}

int Player::getXp(){
    return xp;
}

void Player::setLocx(int newLocx){
    locX = newLocx;
}

int Player::getLocx(){
    return locX;
}

void Player::setLocy(int newLocy){
    locY = newLocy;
}

int Player::getLocy(){
    return locY;
}

void Player::setName(string& newName){
    name = newName;
}

string Player::getName(){
    return name;
}

void Player::setPassword(string& newPassword){
    password = newPassword;
}

string Player::getPassword(){
    return password;
}

void Player::setInv(string& item1, string& item2, string& item3, string& item4){
    inventory[0] = item1;
    inventory[1] = item2;
    inventory[2] = item3;
    inventory[3] = item4;
}

string* Player::getInv(){
    return inventory;
}

int main() {


    Player p1, p2, p3;
    string newName, newPassword;
    string item1, item2, item3, item4;
    srand(time(0));

        cout << "This program generates and displays three players information.\n";
        cout << endl;

        cout << "Player Info:\n";
        cout << endl;

        cout.width(15); cout << left << "Name: ";
        p1.setName(newName = "Baldur the Brave");
        cout.width(15); cout << left << p1.getName() << endl;
        cout.width(15); cout << left << "Password: ";
        p1.setPassword(newPassword = "iH8Mistletoe");
        cout.width(15); cout << left << p1.getPassword() << endl;
        cout.width(15); cout << left << "Experience: ";
        p1.setXp(rand()%100);
        cout.width(15); cout << left << p1.getXp() << endl;
        cout.width(15); cout << left << "Position: ";
        p1.setLocx(rand()%1000);
        p1.setLocy(rand()%1000);
        cout << left << p1.getLocx() << ", " << p1.getLocy() << endl;
        cout.width(15); cout << left << "Inventory: ";
        p1.setInv(item1 = "Golden Apple", item2 = "Potion of Strength",
                  item3 = "Letter from Hodur", item4 = "Party Invitation");
        string* ptr = p1.getInv();
        cout << left << ptr[0] << endl;
        cout << left << *(p1.getInv()+1) << endl;
        cout << endl;

        cout.width(15); cout << left << "Name: ";
        p2.setName(newName = "Odin Allfather");
        cout.width(15); cout << left << p2.getName() << endl;
        cout.width(15); cout << left << "Password: ";
        p2.setPassword(newPassword = "allSeeing");
        cout.width(15); cout << left << p2.getPassword() << endl;
        cout.width(15); cout << left << "Experience: ";
        p2.setXp(rand()%100);
        cout.width(15); cout << left << p2.getXp() << endl;
        cout.width(15); cout << left << "Position: ";
        p2.setLocx(rand()%1000);
        p2.setLocy(rand()%1000);
        cout << left << p2.getLocx() << ", " << p2.getLocy() << endl;
        cout.width(15); cout << left << "Inventory: ";
        p2.setInv(item1 = "Left Eye", item2 = "Raven Food",
                  item3 = "Gungnir", item4 = "Eyepatch");
        cout << left << p2.getInv() << endl;
        cout << endl;

        cout.width(15); cout << left << "Name: ";
        p3.setName(newName = "Thor Odinson");
        cout.width(15); cout << left << p3.getName() << endl;
        cout.width(15); cout << left << "Password: ";
        p3.setPassword(newPassword = "LokiSux");
        cout.width(15); cout << left << p3.getPassword() << endl;
        cout.width(15); cout << left << "Experience: ";
        p3.setXp(rand()%100);
        cout.width(15); cout << left << p3.getXp() << endl;
        cout.width(15); cout << left << "Position: ";
        p3.setLocx(rand()%1000);
        p3.setLocy(rand()%1000);
        cout << left << p3.getLocx() << ", " << p3.getLocy() << endl;
        cout.width(15); cout << left << "Inventory: ";
        p3.setInv(item1 = "Mjolnir", item2 = "Megingjord",
                  item3 = "Jarngreipr", item4 = "Snake Scales");
        cout << left << p3.getInv() << endl;
        cout << endl;

    return 0;
}
