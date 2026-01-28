#include <stdio.h>
int main()
{
    int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) // loop baris
    {
        for (int j = 0; j < 3; j++) // loop kolom
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
