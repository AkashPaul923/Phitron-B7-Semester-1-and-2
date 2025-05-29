#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int size = strlen(s);
        sort(s, s + size);
        for (int i = 0; i < size; i++)
        {
            if (s[i] != 32)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}