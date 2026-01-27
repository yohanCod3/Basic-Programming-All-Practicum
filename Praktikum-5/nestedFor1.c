#include <stdio.h>

int main()
{
    // 1.0 perkalian NESTED LOOP
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("----------\n");
    }
    return 0;
}