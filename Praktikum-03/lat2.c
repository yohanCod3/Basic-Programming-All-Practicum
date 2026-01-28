#include <stdio.h>
int main()
{
    // program IF ELSE

    // deklarasi variabel
    int number;
    printf("Masukkan Integer: ");
    scanf("%d", &number);

    // Benar jika sisa =eve 0
    if (number % 2 == 0)
    {
        printf("%d adalah bilangan genap.", number);
    }
    else
    {
        printf("%d adalah bilangan ganjil.", number);
    }
    return 0;
}