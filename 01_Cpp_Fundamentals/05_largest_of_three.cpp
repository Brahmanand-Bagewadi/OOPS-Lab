/*
============================================================
Program Title : Find the Largest Among Three Numbers
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Conditional statements
- User input
- Relational operators
- if-else statement

Description:
This program accepts three numbers from the user and
determines the largest number using conditional statements.
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, largest;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    cout << "Largest number = " << largest << endl;

    return 0;
}
