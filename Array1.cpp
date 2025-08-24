// Array1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//display names of car brand
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << "\n";
    }
}

