/*
============================================================
Program Title : Access Specifiers in Inheritance
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Public inheritance
- Protected members
- Private members
- Access control in inheritance

Description:
This program demonstrates how public, protected and private
members behave when inheritance is used. Public and protected
members of the base class can be accessed appropriately
through the derived class, while private members remain
inaccessible directly.
============================================================
*/

#include <iostream>
using namespace std;

class Base
{
public:
    int publicValue;

protected:
    int protectedValue;

private:
    int privateValue;

public:
    Base()
    {
        publicValue = 10;
        protectedValue = 20;
        privateValue = 30;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Public value: " << publicValue << endl;
        cout << "Protected value: " << protectedValue << endl;

        // Private members cannot be accessed directly
        // cout << privateValue << endl;
    }
};

int main()
{
    Derived d1;

    d1.display();

    cout << "Public value accessed from main: "
         << d1.publicValue << endl;

    return 0;
}
