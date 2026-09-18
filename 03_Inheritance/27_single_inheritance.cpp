/*
============================================================
Program Title : Single Inheritance
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Inheritance
- Base class
- Derived class
- Single inheritance
- Protected data member

Description:
This program demonstrates single inheritance in C++.
A derived class inherits the properties and functions
of a single base class.
============================================================
*/

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void displayStudent()
    {
        displayName();
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Brahmanand");
    s1.setMarks(85);

    s1.displayStudent();

    return 0;
}
