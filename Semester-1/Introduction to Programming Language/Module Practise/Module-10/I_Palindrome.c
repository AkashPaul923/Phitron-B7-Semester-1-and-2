#include <stdio.h>
#include <string.h>>
int main()
{
    char str[1001];
    scanf("%s", &str);

    int i = 0, j = strlen(str) - 1, pal = 0;

    while (i <= j)
    {
        if (str[i] != str[j])
        {
            pal = 0;
            break;
        }
        pal = 1;
        i++;
        j--;
    }

    if (pal == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}