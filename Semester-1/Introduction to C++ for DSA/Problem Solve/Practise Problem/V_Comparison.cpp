#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    int r;
    switch (c)
    {
    case '<':
        r = a < b;
        break;

    case '>':
        r = a > b;
        break;

    case '=':
        r = a == b;
        break;

    default:
        break;
    }

    r ? cout << "Right" : cout << "Wrong";

    return 0;
}