#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, w;
    getline(cin, s);
    bool isWord = false;

    stringstream ss(s);

    while (ss >> w)
    {
        if (w == "Jessica")
        {
            isWord = true;
        }
    }

    (isWord == true) ? cout << "YES" : cout << "NO";

    return 0;
}