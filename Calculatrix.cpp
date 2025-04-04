// Calculatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <unordered_map>

using namespace std;

void OSIdentify() {
    cout << "Operating System Detected - ";
    #ifdef _WIN32
        cout << "Microsoft Windows" << "\n";
    #elif __linux__
        cout << "Linux Distro" << "\n";
    #elif  __APPLE__
        cout << "MacOS" << "\n";
    #elif __unix
        cout << "Generic Unix" << "\n";
    #elif __FreeBSD__
        cout << "FreeBSD" << "\n";
    #else
        cout << "Unknown" << "\n";
    #endif
    cout << "\n";
}

void Settings() {
	cout << "Settings Menu" << "\n";
	cout << "precision - Sets the precision of the output" << "\n";
    cout << "colour - Change the colour of the console text" << "\n";
    string command;
    cout << "Command: ";
	cin >> command;
    if (command == "precision") {
        cout << "Precision Value: ";
		int precision;
        cin >> precision;
		cout << setprecision(precision);
        cout << "Precision set: " << precision << "\n";
    }
    if (command == "colour") {
		cout << "Currently under development" << "\n";
    }
    return;
}

void Variables() {
    long double variableX, variableY, variableZ, variableA, variableB, variableC, variableD, variableE, variableF;
    cout << "\n";
    cout << "Variable Menu" << "\n";
    cout << "𝑥 = " << variableX << "\n";
}

void Pythagoras() {
    cout << "\n";
	cout << "Pythagoras Calculations" << "\n";
    cout << "standard - A^2 + B^2 = C^2" << "\n";
    cout << "reverse - C^2 - A^2 = B^2" << "\n";
    cout << "Command: ";
    string command;
    cin >> command;
    long double a, b, c;
        if (command == "standard") {
            cout << "\n";
            cout << "A Value: ";
            cin >> a;
            cout << "B Value: ";
            cin >> b;
            c = sqrt(pow(2, a) + pow(2, b));
            cout << "Hypotenuse Length: " << c << "\n" << "\n";
        }
        if (command == "reverse") {
            cout << "\n";
            cout << "C Value: ";
            cin >> c;
            cout << "A Value: ";
            cin >> a;
            b = sqrt(pow(2, c) - pow(2, a));
            cout << "B Value: " << b << "\n" << "\n";
        }
        if (command != "standard" && command != "reverse") {
            cout << "Invalid Command, please try again" << "\n";
            system("pause");
            Pythagoras();
        }  
    return;
}

void Menu() {
    system("cls");
    OSIdentify();
    cout << "Calculatrix Main Menu" << "\n";
    cout << "variable - Opens Variable Menu" << "\n";
    cout << "calculate - Opens Calculation Engine" << "\n";
    cout << "probabilities - Opens Probability Engine" << "\n";
    cout << "pythagoras - Opens Pythagoras Calculations" << "\n";
	cout << "settings - Opens Settings Menu" << "\n";
    string command;
    cout << "Command: ";
    cin >> command;
    if (command == "variable") {
        Variables();
    } 
    else if (command == "pythagoras") {
        Pythagoras();
    }
    else if (command == "settings") {
        Settings();
    }
    else {
		cout << "Invalid Command, please try again" << "\n";
    }
	system("pause");
    Menu();
}

int main() {
    Menu();
    return 0;
}