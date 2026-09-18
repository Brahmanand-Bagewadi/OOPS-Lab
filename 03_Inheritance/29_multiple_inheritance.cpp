/*
============================================================
Program Title : Multiple Inheritance
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Multiple inheritance
- Base classes
- Derived class
- Public inheritance

Description:
This program demonstrates multiple inheritance in C++.
A derived class inherits properties and member functions
from more than one base class.
============================================================
*/

#include <iostream>
#include <string>
using namespace std;

class Academic
{
protected:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }
};

class Personal
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};

class Student : public Academic, public Personal
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Brahmanand");
    s1.setMarks(90);

    s1.display();

    return 0;
}
