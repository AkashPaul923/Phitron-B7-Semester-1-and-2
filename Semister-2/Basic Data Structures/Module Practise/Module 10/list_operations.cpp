#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {5, 9, 3, 2, 4, 7, 8, 1, 2, 3, 6, 5};
    // descending order
    // l.sort(greater<int>());

    l.sort();

    l.unique();

    l.reverse();

    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}