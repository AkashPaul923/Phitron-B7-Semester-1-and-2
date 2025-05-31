#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello", s2 = "World";
    s += s2;
    cout << s << endl;
    s.append("Programmer");
    cout << s << endl;
    s.push_back('H');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    s.assign("Hi Bangladesh");
    cout << s << endl;
    s.erase(0, 2);
    cout << s << endl;
    s.insert(0, "Hello");
    cout << s << endl;
    s.replace(6, 10, "Programmer");
    cout << s << endl;

    return 0;
}