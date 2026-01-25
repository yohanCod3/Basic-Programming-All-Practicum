#include <stdio.h>

int main()
{
    // TUGAS 2.0 WHILE LOOP BERTINGKAT
    int num, i, j;

    printf("Input nomor baris : ");
    scanf("%d", &num);

    i = 1;
    while (i <= num)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
    /*
    printf("Input nomor baris : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    */

    return 0;
}