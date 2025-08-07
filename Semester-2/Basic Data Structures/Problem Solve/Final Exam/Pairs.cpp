#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first < r.first)
        return true;
    else if (l.first > r.first)
        return false;
    else
        return l.second > r.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}