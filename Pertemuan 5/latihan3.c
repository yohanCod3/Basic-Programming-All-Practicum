#include <stdio.h>

int main()
{
    // TUGAS 3.0 DO WHILE BERTINGKAT
    int i, j;

    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d %d \n", i, j);
            j++;
        } while (j <= 3);
        i++;
    } while (i <= 3);

    /*
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d %d \n", i, j);
        }
    }
    */

    return 0;
}