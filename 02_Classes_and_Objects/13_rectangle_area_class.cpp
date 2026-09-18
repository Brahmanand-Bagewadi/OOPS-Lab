/*
============================================================
Program Title : Calculate Area of Rectangle Using Class
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Data members
- Member functions
- Encapsulation

Description:
This program demonstrates the use of a class and object
to calculate the area of a rectangle. The length and
breadth are stored as private data members and accessed
through member functions.
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
    void setDimensions(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float calculateArea()
    {
        return length * breadth;
    }

    void displayArea()
    {
        cout << "Area of Rectangle = " << calculateArea() << endl;
    }
};

int main()
{
    Rectangle r1;

    float length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    r1.setDimensions(length, breadth);

    r1.displayArea();

    return 0;
}
