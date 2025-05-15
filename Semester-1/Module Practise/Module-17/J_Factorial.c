#include <stdio.h>

long long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int fact = factorial(n - 1);

    return fact * n;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int fact = factorial(n);

    printf("%lld", fact);

    return 0;
}