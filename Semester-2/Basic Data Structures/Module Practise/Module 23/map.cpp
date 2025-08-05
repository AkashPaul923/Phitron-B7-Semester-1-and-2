#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 10;
    mp["samim"] = 60;
    mp["hamim"] = 50;

    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " -> " << i->second << endl;
    }

    (mp.count("namim")) ? cout << " ache" : cout << "nai";
    

    return 0;
}