/*
============================================================
Program Title : Find the Length of a String
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Strings
- Character arrays
- strlen() function
- User input

Description:
This program accepts a string from the user and finds
the number of characters present in the string.
============================================================
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length of the string = " << strlen(str) << endl;

    return 0;
}
