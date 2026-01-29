#include <stdio.h>

int main()
{
    // array tiga dimensi untuk total penjualan
    int item[2][3][4] = {
        {{500, 700, 800, 600},
         {650, 720, 810, 630},
         {700, 750, 900, 700}},
        {{400, 600, 550, 500},
         {450, 620, 580, 550},
         {500, 650, 600, 580}}};

    // menampilkan list keuntungan per bulan
    for (int i = 0; i < 2; i++)
    {
        printf("Cabang %d (item 1, item 2, item 3, item 4)\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Bulan %d: ", j + 1);
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", item[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // menampilkan total keuntungan per bulan
    for (int i = 0; i < 2; i++)
    {
        printf("Cabang %d:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            int total = 0;
            for (int k = 0; k < 4; k++)
            {
                total += item[i][j][k];
            }
            printf("Bulan %d total keuntungan: Rp%d.000", j + 1, total);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}