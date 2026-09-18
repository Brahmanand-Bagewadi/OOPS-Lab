/*
============================================================
Program Title : Check Whether a String is a Palindrome
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Strings
- Character arrays
- String manipulation
- Conditional statements
- Loops

Description:
This program accepts a string from the user and checks
whether the string reads the same from both directions.
============================================================
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    bool palindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
