#include <stdio.h>

struct Buku
{
    char jenis[25];
    int hari;
};

struct Anggota
{
    char nama[50];
    int total;
    struct Buku buku[3];
};

int main()
{
    int denda = 1000;
    struct Anggota anggota = {
        .nama = "Rina",
        .total = 0,
        .buku[0].jenis = "Algoritma",
        .buku[0].hari = 0,
        .buku[1].jenis = "Struktur Data",
        .buku[1].hari = 2,
        .buku[2].jenis = "Basis Data",
        .buku[2].hari = 3};

    printf("Anggota : %s\n\n", anggota.nama);

    printf("Daftar Buku Dipinjam:\n");

    for (int i = 0; i < 3; i++)
    {
        anggota.total += anggota.buku[i].hari;

        printf("%d. %-15s | Hari Telat: %d\n", i + 1, anggota.buku[i].jenis, anggota.buku[i].hari);
    }

    anggota.total *= denda;

    printf("\nTotal Denda = Rp%d", anggota.total);

    return 0;
}