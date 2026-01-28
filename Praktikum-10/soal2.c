#include <stdio.h>

int main()
{
    // 2.0 menjumlahkan dua buah matriks
    int a[2][2] = {
        {1, 2},
        {3, 4}};

    int b[2][2] = {
        {5, 6},
        {7, 8}};

    printf("Matriks A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matriks B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Hasil penjumlahan matriks:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}