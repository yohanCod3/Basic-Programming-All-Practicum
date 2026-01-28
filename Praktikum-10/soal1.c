#include <stdio.h>

int main()
{
    // 1.0 transpose matriks
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int transpose[3][2];

    // menampilkan array 2D sebelum di transpose
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            transpose[j][i] = a[i][j];
        }
        printf("\n");
    }

    // menampilkan array 2D setelah di transpose
    printf("Hasil transpose:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}