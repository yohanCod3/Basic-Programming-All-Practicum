#include <stdio.h>

int main()
{
    // 2.0 segitiga siku-siku NESTED LOOP
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}