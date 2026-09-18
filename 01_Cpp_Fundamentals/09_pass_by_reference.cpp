/*
============================================================
Program Title : Demonstration of Pass by Reference
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Functions
- Pass by reference
- Reference variables
- Function parameters

Description:
This program demonstrates pass by reference, where a
reference to the original variable is passed to the function.
Changes made inside the function directly affect the
original variable.
============================================================
*/

#include <iostream>
using namespace std;

// Function demonstrating pass by reference
void changeValue(int &x)
{
    x = 100;

    cout << "Value inside function: " << x << endl;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Value before function call: " << num << endl;

    changeValue(num);

    cout << "Value after function call: " << num << endl;

    return 0;
}
