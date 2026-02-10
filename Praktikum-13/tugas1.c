#include <stdio.h>
#include <string.h>

struct Pasien
{
    char nama[30];
    char penyakit[30];
};

struct Dokter
{
    char nama[30];
    char spesialis[30];
    struct Pasien pasien[3];
};

int main()
{
    struct Dokter d;

    strcpy(d.nama, "Dr. Siti");
    strcpy(d.spesialis, "Penyakit Dalam");

    strcpy(d.pasien[0].nama, "Andi");
    strcpy(d.pasien[0].penyakit, "Demam");

    strcpy(d.pasien[1].nama, "Budi");
    strcpy(d.pasien[1].penyakit, "Tipes");

    strcpy(d.pasien[2].nama, "Citra");
    strcpy(d.pasien[2].penyakit, "Asam Lambung");

    printf("Nama Dokter: %s\n", d.nama);
    printf("Spesialis: %s\n\n", d.spesialis);

    printf("Daftar Pasien:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s - %s\n", i + 1, d.pasien[i].nama, d.pasien[i].penyakit);
    }
    return 0;
}