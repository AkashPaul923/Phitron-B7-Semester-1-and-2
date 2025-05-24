#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i = 0, j = strlen(str) - 1, flag = 0;

    while (i <= j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
        flag = 1;
        i++;
        j--;
    }

    return flag;
}

int main()
{
    char str[1001];
    scanf("%s", &str);

    int flag = is_palindrome(str);

    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}