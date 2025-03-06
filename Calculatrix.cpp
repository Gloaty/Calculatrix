// Calculatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>

using namespace std;

int Main() {
    Menu();
    return 0;
}

void Menu() {
    cout << "Calculatrix Main Menu";
    cout << "variable - Opens Variable Menu";
    cout << "calculate - Opens Calculation Engine";
    cout << "probabilities - Opens Probability Engine";
}

void Pythagoras() {
    cout << "standard - A^2 + B^2 = C^2";
    cout << "reverse - A^2 - C^2 = B^2";
    cout << "Command:";
    cin >> string x;
    if (x >> "standard") {
        long double a, b, c;
        cout << "A Value:";
        cin >> a;
        cout << "B Value:";
        cin >> b;
        c = sqrt(pow(2, a) + pow(2, b))
            cout << "Hypotenuse Length: " << c;
    }
}