#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};
    list<int> l1;

    l1 = l;

    l.push_back(100);
    l.push_front(500);

    l.pop_back();
    l.pop_front();

    l.insert(next(l.begin(), 2), 1000);
    l.insert(next(l.begin(), 2), l1.begin(), l1.end());
    l.erase(next(l.begin(), 2));

    replace(l.begin(), l.end(), 20, 20000);

    auto it = find(l.begin(), l.end(), 20);
    if (it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
