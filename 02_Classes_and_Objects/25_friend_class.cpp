/*
============================================================
Program Title : Friend Class
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Friend class
- Private data members
- Class and object

Description:
This program demonstrates the use of a friend class.
A friend class is allowed to access the private and
protected members of another class.
============================================================
*/

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    friend class Result;
};

class Result
{
public:
    void displayMarks(Student s)
    {
        cout << "Student marks: " << s.marks << endl;
    }
};

int main()
{
    Student s1(85);

    Result r1;
    r1.displayMarks(s1);

    return 0;
}
