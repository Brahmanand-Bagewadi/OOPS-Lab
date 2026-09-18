/*
============================================================
Program Title : Calculate the Area of a Rectangle
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Variables
- User input
- Arithmetic operations
- Floating-point data types

Description:
This program accepts the length and breadth of a rectangle
from the user and calculates its area.
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    float length, breadth, area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of the rectangle = " << area << endl;

    return 0;
}
