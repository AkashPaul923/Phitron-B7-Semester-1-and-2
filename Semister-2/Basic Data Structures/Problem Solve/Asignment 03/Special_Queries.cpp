#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string s;
        cin >> x;
        if (x == 0)
        {
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}