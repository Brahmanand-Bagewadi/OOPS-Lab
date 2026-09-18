/*
============================================================
Program Title : Addition of Two Complex Numbers
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
- Passing Objects as Arguments

Description:
This program creates a Complex class to represent complex
numbers. Two complex numbers are initialized using a
parameterized constructor and their real and imaginary
parts are added to obtain the resultant complex number.
============================================================
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    // Function to add two complex numbers
    Complex add(Complex c)
    {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    // Function to display the complex number
    void display()
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main()
{
    float real1, imaginary1;
    float real2, imaginary2;

    cout << "Enter real part of first complex number: ";
    cin >> real1;

    cout << "Enter imaginary part of first complex number: ";
    cin >> imaginary1;

    cout << "Enter real part of second complex number: ";
    cin >> real2;

    cout << "Enter imaginary part of second complex number: ";
    cin >> imaginary2;

    Complex c1(real1, imaginary1);
    Complex c2(real2, imaginary2);

    Complex result = c1.add(c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}

/*
Example:
Enter real part of first complex number: 5
Enter imaginary part of first complex number: 3
Enter real part of second complex number: 2
Enter imaginary part of second complex number: 4

First complex number: 5 + 3i
Second complex number: 2 + 4i
Sum of complex numbers: 7 + 7i
  */
