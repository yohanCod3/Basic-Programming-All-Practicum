#include <stdio.h>

int main()
{
    // 3.0 menjumlahkan baris pada array 3x3
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row1 = 0;
    int row2 = 0;
    int row3 = 0;

    printf("Matriks 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matriks 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        printf("Jumlah baris %d = %d", i + 1, sum);
        printf("\n");
    }
    return 0;
}