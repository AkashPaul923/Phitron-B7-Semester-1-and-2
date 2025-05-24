#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char num[101];
    scanf("%s", &num);

    int odd_sum = 0, even_sum = 0;

    for (int i = 0; i < strlen(num); i++)
    {
        if (i % 2 == 0)
        {
            odd_sum += num[i] - '0';
        }
        else
        {
            even_sum += num[i] - '0';
        }
    }

    int dif = abs(odd_sum - even_sum);

    if (dif % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}