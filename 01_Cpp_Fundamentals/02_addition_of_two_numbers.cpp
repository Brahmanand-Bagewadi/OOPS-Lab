/*
============================================================
Program Title : Addition of Two Numbers
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Variables
- User input using cin
- Output using cout
- Arithmetic operations

Description:
This program accepts two numbers from the user and
calculates their sum using the addition operator.
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, sum;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
  
    sum = a + b;

    cout << "Sum = " << sum << endl;

    return 0;
}

/* Input : 
Enter first number: 10
Enter second number: 20

output: Sum = 30*/
