#include <stdio.h>

int main()
{

    // variabel loop, jumlah genap, jumlah ganjil
    int a, cekGenap = 0, cekGanjil = 0;

    // array penyimpan input user (semua, genap, ganjil)
    int angka[10];
    int ganjil[10];
    int genap[10];

    // input 10 angka loop
    printf("Masukkan 10 angka : \n");
    for (a = 0; a < 10; a++)
    {
        printf("Masukkan angka : ");
        scanf("%d", &angka[a]);
        if (angka[a] % 2 == 0)
        {
            genap[cekGenap] = angka[a];
            cekGenap += 1;
        }
        else
        {
            ganjil[cekGanjil] = angka[a];
            cekGanjil += 1;
        }
    }

    // 10 angka input
    printf("\nSemua angka input : \n");
    for (a = 0; a < 10; a++)
    {
        printf("%d ", angka[a]);
    }

    // angka genap
    printf("\nSemua angka genap : \n");
    for (a = 0; a < cekGenap; a++)
    {
        printf("%d ", genap[a]);
    }

    // angka ganjil
    printf("\nSemua angka ganjil : \n");
    for (a = 0; a < cekGanjil; a++)
    {
        printf("%d ", ganjil[a]);
    }

    // jumlah genap dan ganjil yang di inputkan
    printf("\n\nNilai ganjil = %d ", cekGanjil);
    printf("\nNilai genap = %d ", cekGenap);

    return 0;
}