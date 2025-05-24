#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch > 96)
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (ch > 64)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("IS DIGIT");
    }

    return 0;
}