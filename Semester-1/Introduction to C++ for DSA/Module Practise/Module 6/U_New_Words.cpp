#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        (s[i] > 96) ? a[s[i] - 'a']++ : a[s[i] - 'A']++;
    }
    int mn = min({a[4], a[6], a[15], a[19], a[24]});
    cout << mn << endl;

    return 0;
}