#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 1000)
    {
        printf("Three Kacchi");
    }
    else if (taka >= 500)
    {
        printf("One Large Pizza");
    }
    else if (taka >= 250)
    {
        printf("Three Small Burger");
    }
    else if (taka >= 100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}