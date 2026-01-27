#include <stdio.h>

int main()
{
    // deklarasi variabel dan input angka
    int a;
    printf("Masukkan angka : ");
    scanf("%d", &a);

    // validasi positif atau negatif
    if (a > 0)
    {
        if (a % 2 == 0) // validasi ganjil genap
        {
            printf("%d adalah bilangan positif\n", a);
            printf("Dan termasuk bilangan genap");
        }
        else
        {
            printf("%d adalah bilangan positif\n", a);
            printf("Dan termasuk bilangan ganjil");
        }
    }
    else if (a < 0)
    {
        if (a % 2 == 0) // validasi ganjil genap
        {
            printf("%d adalah bilangan negatif\n", a);
            printf("Dan termasuk bilangan genap");
        }
        else
        {
            printf("%d adalah bilangan negatif\n", a);
            printf("Dan termasuk bilangan ganjil");
        }
    }

    return 0;
}