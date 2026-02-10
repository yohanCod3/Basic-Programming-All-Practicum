#include <stdio.h>

struct Pasien
{
    char nama[50];
    char sakit[50];
};

struct Dokter
{
    char nama[50];
    char spesialis[50];
    struct Pasien pasien[3];
};

int main()
{
    struct Dokter dokter = {
        .nama = "Dr. Siti",
        .spesialis = "Penyakit Dalam",
        .pasien[0].nama = "Andi",
        .pasien[0].sakit = "Demam",
        .pasien[1].nama = "Budi",
        .pasien[1].sakit = "Tipes",
        .pasien[2].nama = "Citra",
        .pasien[2].sakit = "Asam Lambung"};

    printf("Dokter    : %s\n", dokter.nama);
    printf("Spesialis : %s\n", dokter.spesialis);

    printf("\nDaftar Pasien:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s - %s\n", i + 1, dokter.pasien[i].nama, dokter.pasien[i].sakit);
    }

    return 0;
}
