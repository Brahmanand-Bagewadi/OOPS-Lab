/*
============================================================
Program Title : Demonstration of Pass by Pointer
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Functions
- Pointers
- Address operator (&)
- Dereference operator (*)
- Pass by pointer

Description:
This program demonstrates pass by pointer, where the
address of a variable is passed to a function. The function
can modify the original variable using the pointer.
============================================================
*/

#include <iostream>
using namespace std;

// Function demonstrating pass by pointer
void changeValue(int *x)
{
    *x = 100;

    cout << "Value inside function: " << *x << endl;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Value before function call: " << num << endl;

    // Passing the address of num to the function
    changeValue(&num);

    cout << "Value after function call: " << num << endl;

    return 0;
}
