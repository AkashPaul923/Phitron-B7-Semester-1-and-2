#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // change array value using pointer
    *arr = 60;
    *(arr + 2) = 100;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}