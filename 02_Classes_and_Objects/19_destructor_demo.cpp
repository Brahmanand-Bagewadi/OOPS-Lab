/*
============================================================
Program Title : Demonstration of Destructor
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Constructor
- Destructor
- Object Life Cycle

Description:
This program demonstrates the execution of a destructor
when an object goes out of scope.
============================================================
*/

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor Executed" << endl;
    }

    ~Demo()
    {
        cout << "Destructor Executed" << endl;
    }
};

int main()
{
    Demo d1;

    return 0;
}
