#include <stdio.h>
int main()
{
    int duaDimensi[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {

            printf("Baris = %d, Kolom = %d, Nilai = %d\n", i, j, duaDimensi[i][j]);
        }
    return 0;
}
