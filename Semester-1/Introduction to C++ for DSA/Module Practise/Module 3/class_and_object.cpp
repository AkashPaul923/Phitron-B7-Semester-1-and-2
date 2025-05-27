#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    double gpa;
};

int main()
{
    Student a, b;

    cin >> a.name >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 50);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}