#include <stdio.h>

struct Mobil
{
    char merk[25];
    int hari, biaya, total_biaya;
};

struct Pelanggan
{
    char nama[50];
    int total_sewa;
    struct Mobil mobil[2];
};

int main()
{
    struct Pelanggan pelanggan = {
        .nama = "Eka",
        .total_sewa = 0,
        .mobil[0].merk = "Avanza",
        .mobil[0].hari = 2,
        .mobil[0].biaya = 350000,
        .mobil[1].merk = "Fortuner",
        .mobil[1].hari = 1,
        .mobil[1].biaya = 850000};

    printf("Pelanggan : %s\n\n", pelanggan.nama);

    for (int i = 0; i < 2; i++)
    {
        pelanggan.mobil[i].total_biaya = pelanggan.mobil[i].biaya * pelanggan.mobil[i].hari;
        pelanggan.total_sewa += pelanggan.mobil[i].total_biaya;

        printf("%s (%d Hari) -> %d\n", pelanggan.mobil[i].merk, pelanggan.mobil[i].hari, pelanggan.mobil[i].total_biaya);
    }

    printf("\nTotal Biaya Sewa = %d", pelanggan.total_sewa);

    return 0;
}
