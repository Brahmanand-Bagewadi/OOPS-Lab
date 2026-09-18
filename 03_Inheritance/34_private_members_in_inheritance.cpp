/*
============================================================
Program Title : Inheriting Private Members
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Private data members
- Inheritance
- Protected member function
- Encapsulation

Description:
This program demonstrates that private members of a base
class are inherited as part of the base-class object, but
they cannot be accessed directly by the derived class.
A public or protected member function of the base class
can be used to access the private data.
============================================================
*/

#include <iostream>
using namespace std;

class Person
{
private:
    int age;

protected:
    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

class Student : public Person
{
public:
    void setStudentAge(int a)
    {
        setAge(a);
    }

    void displayAge()
    {
        cout << "Student age: " << getAge() << endl;
    }
};

int main()
{
    Student s1;

    s1.setStudentAge(21);
    s1.displayAge();

    return 0;
}
