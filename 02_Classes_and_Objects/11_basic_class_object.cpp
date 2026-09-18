/*
============================================================
Program Title : Demonstration of Class and Object
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class
- Object
- Data members
- Member functions

Description:
This program demonstrates the basic concept of a class
and object in C++. A Student class is created with data
members and a member function to display student details.
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
    void setDetails(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayDetails()
    {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Creating an object of Student class
    Student s1;

    s1.setDetails("Brahmanand", 21);

    s1.displayDetails();

    return 0;
}

