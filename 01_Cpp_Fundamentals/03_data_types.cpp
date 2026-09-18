/*
============================================================
Program Title : Demonstration of C++ Data Types
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Fundamental data types
- sizeof() operator
- Variable declaration

Description:
This program demonstrates commonly used C++ data types
and displays the memory size occupied by each data type.
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int integerValue = 10;
    float floatValue = 10.5f;
    double doubleValue = 20.75;
    char characterValue = 'A';
    bool booleanValue = true;

    cout << "Integer value: " << integerValue << endl;
    cout << "Size of int: " << sizeof(integerValue) << " bytes" << endl;

    cout << "\nFloat value: " << floatValue << endl;
    cout << "Size of float: " << sizeof(floatValue) << " bytes" << endl;

    cout << "\nDouble value: " << doubleValue << endl;
    cout << "Size of double: " << sizeof(doubleValue) << " bytes" << endl;

    cout << "\nCharacter value: " << characterValue << endl;
    cout << "Size of char: " << sizeof(characterValue) << " byte" << endl;

    cout << "\nBoolean value: " << booleanValue << endl;
    cout << "Size of bool: " << sizeof(booleanValue) << " byte" << endl;

    return 0;
}
