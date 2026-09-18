/*
============================================================
Program Title : Demonstration of Default Constructor
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Default Constructor
- Data Members
- Member Functions

Description:
This program demonstrates the use of a default constructor
to initialize data members automatically when an object
is created.
============================================================
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student()
    {
        name = "Brahmanand";
        age = 21;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}
