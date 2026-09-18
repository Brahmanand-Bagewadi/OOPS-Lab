/*
============================================================
Program Title : Runtime Polymorphism Using Virtual Function
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Runtime polymorphism
- Virtual function
- Function overriding
- Base class pointer
- Derived class

Description:
This program demonstrates runtime polymorphism using a
virtual function. The base class pointer is used to refer
to a derived class object, and the overridden function of
the derived class is called at runtime.
============================================================
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows." << endl;
    }
};

int main()
{
    Animal *animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();

    animal = &cat;
    animal->sound();

    return 0;
}
