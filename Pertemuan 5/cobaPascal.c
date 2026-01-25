#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Masukkan jumlah baris segitiga Pascal: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        // Cetak spasi di awal setiap baris agar segitiga rapi
        for (int jarak = 0; jarak < n - i - 1; jarak++)
        {
            printf("  ");
        }

        int coef = 1; // Nilai pertama setiap baris selalu 1
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef); // Cetak angka dengan lebar 4 karakter agar rapi
        }
        printf("\n");
    }

    return 0;
}
