#include <bits/stdc++.h>
using namespace std;

void print_forward(auto it, auto end)
{
    if(it == end)
    {
        return;
    }
    cout << *it << " ";
    print_forward(next(it), end);
}

void print_backward(auto it, auto end)
{
    if(it == end)
    {
        return;
    }
    print_backward(next(it), end);
    cout << *it << " ";
}

int main()
{
    list<int> l;
    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if(x == 0)
        {
            l.push_front(v);
        }
        else if(x == 1)
        {
            l.push_back(v);
        }
        else
        {
            if(v < l.size())
            {
                l.erase(next(l.begin(), v));
            }
        }
        cout << "L -> ";
        print_forward(l.begin(), l.end());
        cout << endl << "R -> ";
        print_backward(l.begin(), l.end());
        cout << endl;
    }

    return 0;
}