// Calculatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    if (cin >> "standard") {
        cout << "A Value:";
        cin >> long-double a;
        cout << "B Value:";
        cin >> long double b;
        long double c = sqrt(pow(2, a) + pow(2, b))
            cout << "Hypotenuse Length: " << c;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
