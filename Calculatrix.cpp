// Calculatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>

using namespace std;

void Pythagoras() {
    cout << "standard - A^2 + B^2 = C^2" << "\n";
    cout << "reverse - A^2 - C^2 = B^2" << "\n";
    cout << "Command:";
    string command;
    cin >> command;
    if (command == "standard") {
        long double a, b, c;
        cout << "A Value:";
        cin >> a;
        cout << "B Value:";
        cin >> b;
        c = sqrt(pow(2, a) + pow(2, b));
        cout << "Hypotenuse Length: " << c;
    }
    return;
}

void Menu() {
    cout << "Calculatrix Main Menu" << "\n";
    cout << "variable - Opens Variable Menu" << "\n";
    cout << "calculate - Opens Calculation Engine" << "\n";
    cout << "probabilities - Opens Probability Engine" << "\n";
    cout << "pythagoras - Opens Pythagoras Calculations" << "\n";
    string command;
    cout << "Command: ";
    cin >> command;
    if (command == "pythagoras") {
        Pythagoras();
    }
    Menu();
}

int main() {
    Menu();
    return 0;
}