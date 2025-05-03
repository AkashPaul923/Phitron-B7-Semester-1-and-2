#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++) // loop for print n lines
    {
        for (int k = 1; k <= space; k++) // loop for print space
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // loop for print star
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    return 0;
}