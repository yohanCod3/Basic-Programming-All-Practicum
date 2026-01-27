#include <stdio.h>

int main()
{
    // 4.0 matriks 3 x 3 NESTED LOOP

    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}