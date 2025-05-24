#include <stdio.h>

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    print(i + 1, n);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print(i, n);

    return 0;
}