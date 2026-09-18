/*
============================================================
Program Title : Demonstration of Static Data Member
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Static Data Member
- Scope Resolution Operator

Description:
This program demonstrates a static data member that is
shared by all objects of a class. The value is common
to every object created from the class.
============================================================
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    static int count;

    Student(string n)
    {
        name = n;
        count++;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1("Brahmanand");
    Student s2("Akhil");
    Student s3("Pramod");

    s1.display();
    s2.display();
    s3.display();

    cout << "Total number of objects created: "
         << Student::count << endl;

    return 0;
}
