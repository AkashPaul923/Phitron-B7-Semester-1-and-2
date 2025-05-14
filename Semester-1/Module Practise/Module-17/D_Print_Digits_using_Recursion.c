#include <stdio.h>
#include <string.h>

void print(char str[], int i, int len)
{
    if (i == len)
    {
        printf("\n");
        return;
    }

    printf("%d ", str[i] - '0');
    print(str, i + 1, len);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        char str[12];
        scanf("%s", &str);
        int len = strlen(str);
        print(str, 0, len);
    }

    return 0;
}