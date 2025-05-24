#include<stdio.h>
int main()
{
    char str[50];

    fgets(str, 12, stdin);
    printf("%s", str);

    return 0;
}