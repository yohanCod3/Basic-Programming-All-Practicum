#include <stdio.h>
int main()
{
    int example[2][4][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}},
        {{13, 14, 15}, {16, 17, 18}, {19, 20, 21}, {22, 23, 24}}};
    for (int i = 0; i < 2; i++)
    {
        printf("Block %d:\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", example[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Nilai di block 2, baris 3, kolom 2 adalah: %d\n", example[1][2][1]);
    example[0][1][2] = 99;
    printf("Setelah diubah, nilai di block 1, baris 2, kolom 3 adalah: %d\n",
           example[0][1][2]);
    return 0;
}