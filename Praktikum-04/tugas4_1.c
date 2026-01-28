#include <stdio.h>

int main()
{

    // variabel loop, jumlah genap, jumlah ganjil
    int a, angka, cekGenap = 0, cekGanjil = 0;

    // input 10 angka loop
    printf("Masukkan 10 angka : \n");
    for (a = 0; a < 10; a++)
    {
        printf("Masukkan angka : ");
        scanf("%d", &angka);
        if (angka % 2 == 0)
        {
            cekGenap += 1;
        }
        else
        {
            cekGanjil += 1;
        }
    }

    // jumlah genap dan ganjil yang di inputkan
    printf("\n\nNilai ganjil = %d ", cekGanjil);
    printf("\nNilai genap = %d ", cekGenap);

    return 0;
}