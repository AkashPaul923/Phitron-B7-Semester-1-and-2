#include <stdio.h>
int main()
{
    int x = 10;

    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr; // pointer variable
    ptr = &x;

    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    // change x variable value using pointer de-reference
    *ptr = 200; 
    printf("%d\n", x);
    printf("%d\n", *ptr);

    return 0;
}