#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    while (true)
    {
        string s;
        cin >> s;
        if(s == "end")
        {
            break;
        }  
        l.push_back(s);
    }
    auto current = l.begin();
    int t;
    cin >> t;
    while (t--)
    {
        string s, str;
        cin >> s;
        if(s == "next")
        {
            if (next(current) == l.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = next(current);
                cout << *current << endl;
            }
            
        }
        else if (s == "prev")
        {
            if (current == l.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = prev(current);
                cout << *current << endl;
            }
        }
        else
        {
            cin >> str;
            auto pos = find(l.begin(), l.end(), str);
            if(pos == l.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = pos;
                cout << *current << endl;
            }
        }
        
    }

    return 0;
}