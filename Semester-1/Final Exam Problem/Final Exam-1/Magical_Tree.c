#include <stdio.h>
int main()
{
    int n, line = 5;
    scanf("%d", &n);

    // first part line count
    for (int i = 1; i <= n; i += 2)
    {
        line++;
    }

    // first part star and space print
    int star = 1, space = line - 1;
    for (int i = 1; i <= line; i++)
    {
        for (int k = space; k > 0; k--)
        {
            printf(" ");
        }
        space--;
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }
    
    // second part star and space print
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}