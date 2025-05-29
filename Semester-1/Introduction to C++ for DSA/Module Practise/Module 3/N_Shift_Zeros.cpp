#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n]();
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[j]=a[i];
            j++;
        }
        
    }
    delete[] a;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}