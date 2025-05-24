#include<stdio.h>
int main()
{
    char str[1000001];
    scanf("%s", &str);

    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int x = str[i] - '0';
        sum += x;
    }
    
    printf("%d", sum);

    return 0;
}