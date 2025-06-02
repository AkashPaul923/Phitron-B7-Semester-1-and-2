#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Hello World";
    cout << s1 << endl;

    string s2("Hello World");
    cout << s2 << endl;

    string s3("Hello World", 7);
    cout << s3 << endl;

    string s4(s1, 4);
    cout << s4 << endl;

    string s5(10, 'A');
    cout << s5 << endl;

    return 0;
}