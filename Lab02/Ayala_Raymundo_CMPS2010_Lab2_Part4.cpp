#include <iostream>

using namespace std;

//Floar number calculations

int main ()
{   

    float numberOne, numberTwo, numbersMultiplied, numbersDivided, numbersAdded, numbersSubtracted;
    cout << "Please enter two numbers: " << "\n";
    cin >> numberOne >> numberTwo;

    numbersMultiplied = numberOne * numberTwo;
    numbersDivided = numberOne / numberTwo;
    numbersAdded = numberOne + numberTwo;
    numbersSubtracted = numberOne - numberTwo;

    cout << "Numbers Multiplied: " << numbersMultiplied << "\n" << "Numbers Divided: " << numbersDivided << "\n" << "Numbers Added: " << numbersAdded << "\n";
    cout << "Numbers Subtracted: " << numbersSubtracted << "\n";

    return 0;

}
