/*
============================================================
Program Title : Demonstration of Pass by Value
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Functions
- Pass by value
- Function parameters
- Local variables

Description:
This program demonstrates pass by value, where a copy of
the actual argument is passed to the function. Any changes
made to the parameter inside the function do not affect
the original variable.
============================================================
*/

#include <iostream>
using namespace std;

// Function demonstrating pass by value
void changeValue(int x)
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
