#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    cout << l.size() << endl;

    l.clear();
    cout << l.size() << endl;

    if (l.empty())
    {
        cout << "empty" << endl;
    }

    return 0;
}