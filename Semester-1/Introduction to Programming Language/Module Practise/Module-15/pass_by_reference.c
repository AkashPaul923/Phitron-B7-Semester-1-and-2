#include <stdio.h>

void fun(int *p)
{
    *p = 20;
}

int main()
{
    int x = 10;
    printf("%d\n", x);
    fun(&x);
    printf("%d\n", x);

    return 0;
}