#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c > 96)
    {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else if (c > 64)
    {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}