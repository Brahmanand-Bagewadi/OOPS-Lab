/*
============================================================
Program Title : Demonstration of Copy Constructor
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Copy Constructor
- Object Initialization

Description:
This program demonstrates how a copy constructor creates
a new object by copying the values of an existing object.
============================================================
*/

#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number(const Number &obj)
    {
        value = obj.value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1(100);
    Number n2 = n1;

    cout << "Original Object:" << endl;
    n1.display();

    cout << "Copied Object:" << endl;
    n2.display();

    return 0;
}
