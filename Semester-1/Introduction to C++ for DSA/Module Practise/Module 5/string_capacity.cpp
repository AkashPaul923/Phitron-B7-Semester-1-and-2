#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    s.resize(15, 'x');
    cout << s << endl;
    cout << s.empty() << endl;
    s.clear();
    cout << s.empty() << endl;

    return 0;
}