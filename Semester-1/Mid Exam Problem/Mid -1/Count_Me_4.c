#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    scanf("%s", str);

    int arr[26] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        arr[str[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c - %d\n", i + 97, arr[i]);
        }
    }

    return 0;
}