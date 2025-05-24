#include <stdio.h>

int count_vowel(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int count = count_vowel(s, i + 1);

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);

    int count = count_vowel(s, 0);

    printf("%d", count);

    return 0;
}