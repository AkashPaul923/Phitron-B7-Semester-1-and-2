#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(10);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int val;
    cin >> val;
    v.push_back(val);
    int child = v.size() - 1;
    while (child != 0)
    {
        int parent = (child - 1) / 2;
        if (v[child] < v[parent])
            swap(v[child], v[parent]);
        else
            break;
        child = parent;
    }
    for (int x : v)
        cout << x << " ";

    return 0;
}