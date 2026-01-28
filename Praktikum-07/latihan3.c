#include <stdio.h>

// SOAL FUNGSI 3 HARGA DISKON
float diskonHarga(float harga, float diskon);

// PROGRAM UTAMA
int main()
{
    float harga, diskon;
    printf("Masukkan harga dan persen diskon :");
    scanf("%f %f", &harga, &diskon);
    printf("Harga setelah diskon : Rp%.2f", diskonHarga(harga, diskon));
    return 0;
}

// HARGA SETELAH DISKON
float diskonHarga(float harga, float diskon)
{
    float bayar;
    bayar = harga - (harga * diskon / 100);
    return bayar;
}