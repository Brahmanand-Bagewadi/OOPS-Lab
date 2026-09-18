/*
============================================================
Program Title : Hybrid Inheritance
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Hybrid inheritance
- Multiple inheritance
- Multilevel inheritance
- Base and derived classes

Description:
This program demonstrates hybrid inheritance by combining
more than one type of inheritance in a single class hierarchy.
Here, multilevel and multiple inheritance are combined.
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

class Sports
{
protected:
    int sportsMarks;

public:
    void setSportsMarks(int m)
    {
        sportsMarks = m;
    }
};

class Result : public Student, public Sports
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

int main()
{
    Result r1;

    r1.setName("Brahmanand");
    r1.setRollNo(353);
    r1.setSportsMarks(85);

    r1.display();

    return 0;
}
