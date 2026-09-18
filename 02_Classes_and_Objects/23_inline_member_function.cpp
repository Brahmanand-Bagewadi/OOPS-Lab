/*
============================================================
Program Title : Inline Member Function
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Inline function
- Class and object
- Member function

Description:
This program demonstrates an inline member function used
to calculate the area of a rectangle. The function is
defined inside the class and can be treated as an inline
function by the compiler.
============================================================
*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    inline float area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r1(10, 5);

    cout << "Area of rectangle: " << r1.area() << endl;

    return 0;
}
