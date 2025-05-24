#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", &str);

    int len = strlen(str);
    int vol = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vol++;
        }
    }

    int con = len - vol;

    printf("%d", con);

    return 0;
}