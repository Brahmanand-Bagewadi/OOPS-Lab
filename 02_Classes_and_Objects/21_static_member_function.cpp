/*
============================================================
Program Title : Static Member Function
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Static data member
- Static member function
- Class and objects
- Scope resolution operator

Description:
This program demonstrates the use of a static member function
to access and display a static data member of a class.
The static member function is called using the class name.
============================================================
*/

#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}
