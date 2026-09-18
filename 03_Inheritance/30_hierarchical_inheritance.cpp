/*
============================================================
Program Title : Hierarchical Inheritance
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Hierarchical inheritance
- Base class
- Multiple derived classes
- Public inheritance

Description:
This program demonstrates hierarchical inheritance where
multiple derived classes inherit properties and functions
from a single base class.
============================================================
*/

#include <iostream>
#include <string>
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
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person
{
private:
    string subject;

public:
    void setSubject(string s)
    {
        subject = s;
    }

    void displayTeacher()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s1;
    Teacher t1;

    s1.setName("Brahmanand");
    s1.setMarks(88);

    t1.setName("Prof. Kumar");
    t1.setSubject("C++");

    s1.displayStudent();

    cout << endl;

    t1.displayTeacher();

    return 0;
}
