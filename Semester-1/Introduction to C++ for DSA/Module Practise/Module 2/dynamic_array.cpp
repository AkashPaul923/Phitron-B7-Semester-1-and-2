#include <bits/stdc++.h>
using namespace std;

int main()
{
    // dynamic array declaration
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}