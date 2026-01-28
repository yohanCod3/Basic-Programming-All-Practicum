#include <stdio.h>

int main()
{
    // 5.0 menukar dua baris matriks
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // menampilkan array 3x3
    printf("Matriks 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // menukar dua
    for (int i = 0; i < 3; i++)
    {
        int temp = a[0][i];
        a[0][i] = a[2][i];
        a[2][i] = temp;
    }

    printf("Matriks 3x3 setelah diubah:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}