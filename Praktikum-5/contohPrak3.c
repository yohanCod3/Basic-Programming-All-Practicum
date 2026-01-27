#include <stdio.h>
#define columnx 10
#define rowmax 10

int main()
{
    // CONTOH 3.0 DO WHILE BERTINGKAT
    int row, column, y;
    row = 1;
    printf("Multipication Table\n");
    printf("================================\n");

    do
    {
        column = 1;
        do
        {
            y = row * column;
            printf("%4d", y);
            column += 1;
        } while (column <= columnx);
        printf("\n");
        row += 1;
    } while (row <= rowmax);
    printf("================================\n");

    return 0;
}