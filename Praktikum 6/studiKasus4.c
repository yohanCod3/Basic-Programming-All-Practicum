#include <stdio.h>

// TUGAS 4.0 PROSEDUR HARGA DISKON
void hargaDiskon(float belanja)
{
    float totalBayar;
    printf("Total Belanja : Rp%.2f\n", belanja);
    if (belanja < 100000)
    {
        totalBayar = belanja;
        printf("Diskon = - \n");
    }
    else if (belanja >= 100000 && belanja < 499999)
    {
        totalBayar = belanja - (belanja * 0.1);
        printf("Diskon = 10%% \n");
    }
    else if (belanja >= 500000)
    {
        totalBayar = belanja - (belanja * 0.2);
        printf("Diskon = 20%% \n");
    }
    printf("Total Bayar Setelah Diskon : Rp%.2f", totalBayar);
}

int main()
{

    float belanja;
    printf("=== Program Hitung Diskon Pembelian ===\n");
    printf("Masukkan total belanja : ");
    scanf("%f", &belanja);
    hargaDiskon(belanja);

    return 0;
}