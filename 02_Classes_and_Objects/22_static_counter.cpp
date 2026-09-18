/*
============================================================
Program Title : Static Counter
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Static data member
- Class and objects
- Object counting

Description:
This program demonstrates how a static data member can be
used as a common counter shared by all objects of a class.
The counter is incremented whenever a new object is created.
============================================================
*/

#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
        cout << "Object created. Current count: " << count << endl;
    }

    static void showCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main()
{
    Counter c1;
    Counter c2;
    Counter c3;
    Counter c4;

    Counter::showCount();

    return 0;
}
