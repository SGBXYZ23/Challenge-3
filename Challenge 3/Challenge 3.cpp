// Challenge 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

const int ERROR_STRING_INPUT = 1;

int main()
{
    double x;
    cout << "Please enter a number: ";
    cin >> x;

	// Check if the input is valid
    if (cin.fail())
    {
        cerr << "ERROR: I was expecting a number, not a string. Exiting." << endl;
        return ERROR_STRING_INPUT;
    }

    // Performs the equations and prints them
    cout << "neg(x): " << -x << endl;
    cout << "abs(x): " << abs(x) << endl;
    cout << "pow2(x): " << pow(x, 2) << endl;
    cout << "pow3(x): " << pow(x, 3) << endl;
    cout << "floor(x): " << floor(x) << endl;
    cout << "ceil(x): " << ceil(x) << endl;
    cout << "round(x): " << round(x) << endl;

    if (x >= 0)
    {
        cout << "sqrt(x): " << sqrt(x) << endl;
    }
    else
    {
        cout << "sqrt(x): Not defined for negative numbers" << endl;
    }

    return 0;
}


