#include <stdio.h>

// 1.0 PROSEDUR NILAI AKHIR
void hitungNilaiAkhir(float tugas, float uts, float uas)
{
    float nilaiAkhir;
    nilaiAkhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);

    printf("\n==== HASIL NILAI AKHIR ====");
    printf("\nNilai Tugas : %.2f", tugas);
    printf("\nNilai UTS : %.2f", uts);
    printf("\nNilai UAS : %.2f", uas);
    printf("\nNilai Akhir : %.2f", nilaiAkhir);

    if (nilaiAkhir >= 85)
    {
        printf("\nPredikat : A");
    }
    else if (nilaiAkhir >= 75)
    {
        printf("\nPredikat = B");
    }
    else if (nilaiAkhir >= 65)
    {
        printf("\nPredikat = C");
    }
    else if (nilaiAkhir >= 50)
    {
        printf("\nPredikat = D");
    }
    else
    {
        printf("\nPredikat = E");
    }
}

int main()
{
    float tugas, uts, uas;
    printf("==== Program Hitung Nilai Akhir Mahasiswa ====");
    printf("\nMasukkan nilai tugas : ");
    scanf("%f", &tugas);
    printf("Masukkan nilai UTS : ");
    scanf("%f", &uts);
    printf("Masukkan nilai UTS : ");
    scanf("%f", &uas);

    hitungNilaiAkhir(tugas, uts, uas);
}