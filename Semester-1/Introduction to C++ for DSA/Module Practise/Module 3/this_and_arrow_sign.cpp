#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student a(1234, 5, 3.25);
    Student b(1634, 5, 3.99);

    cout << a.roll << " " << a.cls << " " << a.gpa << endl;
    cout << b.roll << " " << b.cls << " " << b.gpa << endl;

    return 0;
}