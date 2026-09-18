/*
============================================================
Program Title : Demonstration of Parameterized Constructor
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Parameterized Constructor
- Data Members
- Member Functions

Description:
This program demonstrates the use of a parameterized
constructor to initialize object data members with values
provided by the user.
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
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    string name;
    int age;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    Student s1(name, age);

    s1.display();

    return 0;
}
