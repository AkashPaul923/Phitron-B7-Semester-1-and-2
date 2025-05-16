#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        // input a array and copy in b array
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            b[j] = a[j];
        }

        // sorting b array in ascending order
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (b[j] > b[k])
                {
                    int temp = b[j];
                    b[j] = b[k];
                    b[k] = temp;
                }
            }
        }

        // find absolute difference between a and b, stored in c and print c array.
        for (int j = 0; j < n; j++)
        {
            c[j] = abs(a[j] - b[j]);
            printf("%d ", c[j]);
        }

        // new line print for each test case.
        printf("\n");
    }

    return 0;
}