#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = (n - 1) / 2;
    int for_slash = 0;
    int back_slash = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i == mid)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == mid)
                {
                    cout << "X";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == for_slash)
                {
                    cout << "\\";
                }
                else if (j == back_slash)
                {
                    cout << "/";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        for_slash++;
        back_slash--;
        cout << endl;
    }

    return 0;
}