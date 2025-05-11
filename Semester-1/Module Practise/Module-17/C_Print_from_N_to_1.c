#include <stdio.h>

void print(int i)
{
    printf("%d", i);
    if (i == 1)
    {
        return;
    }
    printf(" ");
    print(i - 1);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = n;
    print(i);

    return 0;
}