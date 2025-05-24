#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[1001];
        scanf("%s", &str);

        int arr[26] = {0};

        for (int j = 0; j < strlen(str); j++)
        {
            arr[str[j] - 97]++;
        }

        int count = 0;

        for (int j = 0; j < 26; j++)
        {
            if (arr[j] % 2 != 0)
            {
                count++;
            }
        }

        if (count > 1)
        {
            printf("%d\n", count - 1);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}