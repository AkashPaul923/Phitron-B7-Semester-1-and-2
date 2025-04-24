#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11], c[11];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    strcpy(c, a);
    strcat(c, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n", len_a, len_b);
    printf("%s\n%s %s", c, a, b);

    return 0;
}