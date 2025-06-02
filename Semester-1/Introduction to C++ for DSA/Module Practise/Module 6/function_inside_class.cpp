#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "The total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 21, 86, 67);
    Student rakib("Rakib Ahmed", 21, 69, 97);
    sakib.total();
    rakib.total();

    return 0;
}