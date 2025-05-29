#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int mark;
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.mark;
        cin >> b.id >> b.name >> b.section >> b.mark;
        cin >> c.id >> c.name >> c.section >> c.mark;

        Student topper;

        if (a.mark > b.mark && a.mark > c.mark)
        {
            topper = a;
        }
        else if (b.mark > a.mark && b.mark > c.mark)
        {
            topper = b;
        }
        else if (c.mark > a.mark && c.mark > b.mark)
        {
            topper = c;
        }
        else if (a.mark == b.mark)
        {
            if (a.id < b.id)
            {
                topper = a;
            }
            else
            {
                topper = b;
            }
        }
        else if (a.mark == c.mark)
        {
            if (a.id < c.id)
            {
                topper = a;
            }
            else
            {
                topper = c;
            }
        }
        else if (b.mark == c.mark)
        {
            if (b.id < c.id)
            {
                topper = b;
            }
            else
            {
                topper = c;
            }
        }
        else
        {
            if (a.id < b.id && a.id < c.id)
            {
                topper = a;
            }
            else if (b.id < a.id && b.id < c.id)
            {
                topper = b;
            }
            else
            {
                topper = c;
            }
        }
        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.mark << endl;
    }

    return 0;
}