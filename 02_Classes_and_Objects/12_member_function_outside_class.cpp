/*
============================================================
Program Title : Defining Member Function Outside the Class
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Member Function
- Scope Resolution Operator ::

Description:
This program demonstrates how a member function can be
declared inside a class and defined outside the class
using the scope resolution operator.
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
    void setDetails(string n, int a);
    void displayDetails();
};

// Defining the member function outside the class
void Student::setDetails(string n, int a)
{
    name = n;
    age = a;
}

// Defining another member function outside the class
void Student::displayDetails()
{
    cout << "Student Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    Student s1;

    s1.setDetails("Brahmanand", 21);
    s1.displayDetails();

    return 0;
}
