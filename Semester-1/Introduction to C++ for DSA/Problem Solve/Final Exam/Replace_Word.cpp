#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        int x_len = x.size();

        int j = 0;
        while (j < s.size())
        {
            if (s[j] == x[0])
            {
                int k = j, l = 0;
                bool isFind = false;
                while (k < j + x_len)
                {
                    if (s[k] != x[l])
                    {
                        isFind = false;
                        break;
                    }
                    isFind = true;
                    k++;
                    l++;
                }
                if (isFind == true)
                {
                    s.replace(j, x_len, "#");
                }
            }
            j++;
        }

        cout << s << endl;
    }

    return 0;
}