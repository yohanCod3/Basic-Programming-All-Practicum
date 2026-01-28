#include <stdio.h>

int main()
{
    // SOAL ARRAY 3.0
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {5, 15, 25, 35, 45};

    printf("Array A: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray B: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nHasil penjumlahan (A + B): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i] + b[i]);
    }
    return 0;
}