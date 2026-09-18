/*
============================================================
Program Title : Multilevel Inheritance
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Inheritance
- Multilevel inheritance
- Base and derived classes
- Protected data members

Description:
This program demonstrates multilevel inheritance where
one derived class becomes the base class for another
derived class.
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
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }
};

class Result : public Student
{
private:
    float marks;

public:
    void setMarks(float m)
    {
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r1;

    r1.setName("Brahmanand");
    r1.setRollNo(353);
    r1.setMarks(88.5);

    r1.display();

    return 0;
}
