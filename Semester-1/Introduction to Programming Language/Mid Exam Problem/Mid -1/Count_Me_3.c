#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[10001];
        scanf("%s", str);

        int cap = 0, sm = 0, dig = 0;
        int len = strlen(str);

        for (int j = 0; j < len; j++)
        {
            if (str[j] > 96)
            {
                sm++;
            }
            else if (str[j] > 64 && str[j] < 91)
            {
                cap++;
            }
            else
            {
                dig++;
            }
        }

        printf("%d %d %d\n", cap, sm, dig);
    }

    return 0;
}