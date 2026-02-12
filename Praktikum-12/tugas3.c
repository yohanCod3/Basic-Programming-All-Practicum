#include <stdio.h>

struct Barang
{
    char nama[50];
    float harga;
    float diskon;
};

int main()
{
    struct Barang item[2];
    printf("Program hitung harga barang dengan diskon\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Masukkan nama barang:");
        scanf(" %[^\n]s", item[i].nama);
        printf("Masukkan harga barang:");
        scanf(" %f", &item[i].harga);
        printf("Masukkan diskon barang:");
        scanf("%f", &item[i].diskon);

        float bayar = item[i].harga - item[i].harga * item[i].diskon / 100.0;
        printf("%s dengan harga awal Rp.%.1f\ndan diskon %.0f%%\nmaka pembeli membayar senilai Rp.%.1f\n\n", item[i].nama, item[i].harga, item[i].diskon, bayar);
    }

    return 0;
}