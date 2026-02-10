#include <stdio.h>

struct Tunjangan
{
    char jenis[25];
    int nominal;
};

struct Karyawan
{
    char nama[50];
    int gaji_pokok, total_gaji;
    struct Tunjangan tunjangan[3];
};

int main()
{
    struct Karyawan karyawan = {
        .nama = "Doni",
        .gaji_pokok = 5000000,
        .total_gaji = 0,
        .tunjangan[0].jenis = "Transport",
        .tunjangan[0].nominal = 500000,
        .tunjangan[1].jenis = "Makan",
        .tunjangan[1].nominal = 700000,
        .tunjangan[2].jenis = "Kesehatan",
        .tunjangan[2].nominal = 300000};

    karyawan.total_gaji = karyawan.gaji_pokok;

    printf("Nama Karyawan : %s\n\n", karyawan.nama);

    printf("Rincian Tunjangan :\n");

    for (int i = 0; i < 3; i++)
    {
        karyawan.total_gaji += karyawan.tunjangan[i].nominal;

        printf("%d. %-10s -> %d\n", i + 1, karyawan.tunjangan[i].jenis, karyawan.tunjangan[i].nominal);
    }

    printf("\nTotal Gaji : %d", karyawan.total_gaji);

    return 0;
}