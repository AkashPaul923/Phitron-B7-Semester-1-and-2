#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = 1, space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        star += 2;
        space--;
        printf("\n");
    }

    star -= 4;
    space += 2;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        star -= 2;
        space++;
        printf("\n");
    }

    return 0;
}