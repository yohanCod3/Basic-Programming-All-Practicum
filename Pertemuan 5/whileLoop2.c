#include <stdio.h>

int main()
{
    // 6.0 Segitiga siku-siku while loop || nested while
    int i = 1, j;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}