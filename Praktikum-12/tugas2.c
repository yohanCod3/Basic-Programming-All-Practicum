#include <stdio.h>

struct Nilai
{
    int matkul1, matkul2, matkul3;
};

int main()
{
    struct Nilai n;
    printf("Masukkan nilai matkul pertama :");
    scanf("%d", &n.matkul1);
    printf("Masukkan nilai matkul kedua :");
    scanf("%d", &n.matkul2);
    printf("Masukkan nilai matkul ketiga :");
    scanf("%d", &n.matkul3);
    printf("\nNilai ketiga matkul adalah\n");
    printf("Nilai 1 = %d\n", n.matkul1);
    printf("Nilai 2 = %d\n", n.matkul2);
    printf("Nilai 3 = %d\n", n.matkul3);
    return 0;
}