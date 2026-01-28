#include <stdio.h>

int main()
{
    // 3.0 segitiga siku-siku terbalik NESTED LOOP
    int i, j;

    printf("Baris yang diganti\n");
    for (i = 5; i >= 1; i--) // baris
    {
        for (j = 1; j <= i; j++) // kolom
        {
            printf("|%d x %d = %d| ", i, j, i * j);
            // printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nKolom yang diganti\n");
    for (i = 1; i <= 5; i++) // baris
    {
        for (j = 5; j >= i; j--) // kolom
        {
            printf("|%d x %d = %d| ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}