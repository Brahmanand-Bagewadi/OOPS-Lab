/*
============================================================
Program Title : Friend Function
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Friend function
- Private data members
- Class and object

Description:
This program demonstrates how a friend function can access
the private data members of a class. The friend function is
declared inside the class using the friend keyword.
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

    friend void display(Number n);
};

void display(Number n)
{
    cout << "The value is: " << n.value << endl;
}

int main()
{
    Number n1(25);

    display(n1);

    return 0;
}
