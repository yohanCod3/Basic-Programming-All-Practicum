#include <stdio.h>

int main()
{
    // CONTOH 2.0 WHILE LOOP BERTINGKAT
    int rows, cols;
    int count = 1;
    printf("Masukkan jumlah baris :");
    scanf("%d", &rows);

    printf("Masukkan jumlah kolom :");
    scanf("%d", &cols);

    int a[rows][cols];
    int i = 1;

    while (i <= rows)
    {
        int j = 1;
        while (j <= cols)
        {
            printf("%d\t", count);
            count++;
            j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}