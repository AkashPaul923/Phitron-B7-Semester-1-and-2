#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare a empty list
    list<int> l;

    // declare a n size list
    list<int> l1(10);

    // declare a n size list with a value
    list<int> l2(10, 3);

    // print using iterator
    for (auto i = l2.begin(); i != l2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // print range based
    for (int x : l2)
    {
        cout << x << " ";
    }
    cout << endl;

    // copy list in another list
    list<int> l3 = {10, 20, 30, 40, 50};
    list<int> l4(l3);
    for (int x : l4)
    {
        cout << x << " ";
    }
    cout << endl;

    // copy array in list
    int a[] = {1, 2, 3, 4, 5};
    list<int> l5(a, a + 5);
    for (int x : l5)
    {
        cout << x << " ";
    }
    cout << endl;

    // copy vector in list
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l6(v.begin(), v.end());
    for (int x : l6)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}