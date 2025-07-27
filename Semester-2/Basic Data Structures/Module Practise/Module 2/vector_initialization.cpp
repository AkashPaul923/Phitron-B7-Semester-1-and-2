#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type 1
    vector<int> v;

    // type 2
    vector<int> v1(5);

    // type 3
    vector<int> v2(5, -1);

    // type 4
    vector<int> v3(v2);

    // type 5
    int a[4] = {1, 2, 3, 4};
    vector<int> v4(a, a + 4);

    // type 6
    vector<int> v5 = {1, 2, 3, 4, 5};

    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }

    return 0;
}