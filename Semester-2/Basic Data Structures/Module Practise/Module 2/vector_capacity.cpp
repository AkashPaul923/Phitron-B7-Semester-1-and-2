#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v.size() << endl;

    v.clear();
    cout << v.size() << endl;

    v.push_back(60);
    cout << v.size() << endl;
    
    v.resize(10, 100);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}