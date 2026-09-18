/*
============================================================
Program Title : Passing Object as Function Argument
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Passing objects as function arguments
- Classes and objects
- Member functions

Description:
This program demonstrates how an object of a class can be
passed as an argument to a member function. The function
uses the data of the passed object to perform a calculation.
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

    void add(Number n)
    {
        cout << "Sum: " << value + n.value << endl;
    }
};

int main()
{
    Number n1(20);
    Number n2(30);

    n1.add(n2);

    return 0;
}
