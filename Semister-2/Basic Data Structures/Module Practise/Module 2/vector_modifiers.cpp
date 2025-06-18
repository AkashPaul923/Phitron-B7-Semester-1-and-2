#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v1 = {100, 200, 300, 400, 500};

    // insert a specific value
    v.insert(v.begin() + 1, 100);

    // insert a vector
    v.insert(v.begin() + 1, v1.begin(), v1.end());

    // insert back
    v.push_back(60);

    // remove last value
    v.pop_back();

    // erase all data
    v.erase(v.begin() + 4);

    // replace
    replace(v.begin(), v.end(), 100, 1000);

    // find a value
    auto it = find(v.begin(), v.end(), 1000);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}