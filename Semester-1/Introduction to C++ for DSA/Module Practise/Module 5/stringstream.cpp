#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, w;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s);
    while (ss >> w)
    {
        cout << w << endl;
    }

    return 0;
}