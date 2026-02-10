#include <stdio.h>

struct Matakuliah
{
    char nama[25];
    int sks;
    float nilai, bobot;
};

struct Mahasiswa
{
    char nama[50], nim[10];
    int total_sks;
    float ipk, total_bobot;
    struct Matakuliah mk[3];
};

int main()
{
    struct Mahasiswa mhs = {
        .nama = "Yohanes",
        .nim = "230102010",
        .total_sks = 0,
        .total_bobot = 0.00,
        .ipk = 0.00,
        .mk[0].nama = "Algoritma",
        .mk[0].sks = 3,
        .mk[0].nilai = 88.00,
        .mk[1].nama = "Pemrograman",
        .mk[1].sks = 4,
        .mk[1].nilai = 70.00,
        .mk[2].nama = "Jaringan",
        .mk[2].sks = 3,
        .mk[2].nilai = 90.00};

    printf("Nama : %s\n", mhs.nama);
    printf("NIM  : %s\n", mhs.nim);

    for (int i = 0; i < 3; i++)
    {

        if (mhs.mk[i].nilai >= 85.00)
        {
            mhs.mk[i].bobot = 4.00;
        }

        else if (mhs.mk[i].nilai >= 75.00)
        {
            mhs.mk[i].bobot = 3.00;
        }

        else if (mhs.mk[i].nilai >= 65.00)
        {
            mhs.mk[i].bobot = 2.00;
        }

        else if (mhs.mk[i].nilai >= 55.00)
        {
            mhs.mk[i].bobot = 1.00;
        }

        else
        {
            mhs.mk[i].bobot = 0.00;
        }

        mhs.total_bobot += mhs.mk[i].bobot * mhs.mk[i].sks;
        mhs.total_sks += mhs.mk[i].sks;
        mhs.ipk = mhs.total_bobot / mhs.total_sks;

        printf("%-12s | SKS: %d | Nilai: %.2f | Bobot: %.2f\n",
               mhs.mk[i].nama, mhs.mk[i].sks, mhs.mk[i].nilai, mhs.mk[i].bobot);
    }

    printf("\nTotal SKS = %d", mhs.total_sks);
    printf("\nIPK = %.2f", mhs.ipk);

    return 0;
}