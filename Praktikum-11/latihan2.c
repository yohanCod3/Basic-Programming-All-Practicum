#include <stdio.h>

int main()
{
    // array tiga dimensi untuk total penjualan
    int produk[2][3][2] = {
        {{120, 100},
         {140, 150},
         {160, 170}},
        {{200, 180},
         {220, 210},
         {230, 240}}};

    // menampilkan list produk per cabang
    for (int i = 0; i < 2; i++)
    {
        printf("Cabang %d (produk 1, produk 2)\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Bulan %d: ", j + 1);
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", produk[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // menampilkan total penjualan per bulan
    for (int i = 0; i < 2; i++)
    {
        printf("Cabang %d:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            int total = 0;
            for (int k = 0; k < 2; k++)
            {
                total += produk[i][j][k];
            }
            printf("Bulan %d total penjualan: %d", j + 1, total);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}