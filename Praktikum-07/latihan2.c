#include <stdio.h>

// SOAL FUNGSI 2 MENCARI RATA-RATA 3 ANGKA
float rataRata(float a, float b, float c);

// PROGRAM UTAMA
int main()
{
    float i, j, k;
    printf("Masukkan 3 nilai : ");
    scanf("%f %f %f", &i, &j, &k);
    printf("Rata-rata = %.2f", rataRata(i, j, k));
    return 0;
}

// CARI NILAI RATA-RATA
float rataRata(float a, float b, float c)
{
    float sum, average;
    sum = a + b + c;
    average = sum / 3;
    return average;
}