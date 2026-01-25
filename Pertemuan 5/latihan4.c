#include <stdio.h>

int main()
{
    // TUGAS 4.0 SEGITIGA PASCAL
    int i, j, rows = 9, awal;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        awal = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%3d", awal);
            awal = awal * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}