#include <stdio.h>
int main()
{
    // program NESTED IF

    // deklarasi variabel
    int a, b;
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // validasi sama dengan, lebih besar atau lebih kecil
    if (a == b)
    {
        printf("%d sama dengan %d\n", a, b);
    }
    else
    {
        if (a > b)
        {
            printf("%d lebih besar dari %d\n", a, b);
        }
        else
        {
            printf("%d lebih kecil dari %d\n", a, b);
        }
    }
    return 0;
}