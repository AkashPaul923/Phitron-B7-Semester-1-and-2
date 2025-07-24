#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string str;
        cin >> str;
        for (char c : str)
        {
            if (c == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }
        st.empty() ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}