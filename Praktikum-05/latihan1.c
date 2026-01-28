#include <stdio.h>

int main()
{
    // TUGAS 1.0 FOR LOOP BERTINGKAT
    int rows, cols, i, j;
    printf("Masukkan baris : ");
    scanf("%d", &rows);
    printf("Masukkan kolom : ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("@ ");
        }
        printf("\n");
    }
    return 0;
}