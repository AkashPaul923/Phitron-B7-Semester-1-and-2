#include <stdio.h>

void print(int i, int n)
{
    printf("I love Recursion\n");
    if (i == n)
    {
        return;
    }
    
    print(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print(i, n);

    return 0;
}