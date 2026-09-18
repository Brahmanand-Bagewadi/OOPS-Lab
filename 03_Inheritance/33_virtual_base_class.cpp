/*
============================================================
Program Title : Virtual Base Class
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Virtual base class
- Multiple inheritance
- Diamond inheritance
- Ambiguity resolution

Description:
This program demonstrates the use of a virtual base class
to avoid duplicate copies of a base class when multiple
inheritance is used.
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

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    void setRollNo(int r)
    {
        rollNo = r;
    }
};

class Sports : virtual public Person
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
    r1.setSportsMarks(90);

    r1.display();

    return 0;
}
