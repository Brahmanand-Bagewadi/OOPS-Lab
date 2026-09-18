/*
============================================================
Program Title : Addition of Two Time Objects Using Constructor
============================================================

Student Name  : Brahmanand Nagappa Bagewadi
Roll Number   : 353
Division      : C
SRN           : 01FE23BEC147
Semester      : 7

Concept Used:
- Class and Object
- Constructor
- Data members
- Member functions
- Object as function argument

Description:
This program creates a Time class to represent hours,
minutes and seconds. Two Time objects are initialized
using a constructor and their values are added together.
============================================================
*/

#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Parameterized constructor
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to add two Time objects
    Time addTime(Time t)
    {
        int totalSeconds = seconds + t.seconds;
        int totalMinutes = minutes + t.minutes + totalSeconds / 60;
        int totalHours = hours + t.hours + totalMinutes / 60;

        totalSeconds = totalSeconds % 60;
        totalMinutes = totalMinutes % 60;

        return Time(totalHours, totalMinutes, totalSeconds);
    }

    // Function to display time
    void display()
    {
        cout << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds" << endl;
    }
};

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Enter first time:" << endl;
    cout << "Hours: ";
    cin >> h1;
    cout << "Minutes: ";
    cin >> m1;
    cout << "Seconds: ";
    cin >> s1;

    cout << "\nEnter second time:" << endl;
    cout << "Hours: ";
    cin >> h2;
    cout << "Minutes: ";
    cin >> m2;
    cout << "Seconds: ";
    cin >> s2;

    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);

    Time result = t1.addTime(t2);

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Sum of Time: ";
    result.display();

    return 0;
}

/*Example output:

Enter first time:
Hours: 2
Minutes: 45
Seconds: 30

Enter second time:
Hours: 3
Minutes: 20
Seconds: 40

First Time: 2 hours 45 minutes 30 seconds
Second Time: 3 hours 20 minutes 40 seconds
Sum of Time: 6 hours 6 minutes 10 seconds
  */
