#include <stdio.h>

int main()
{

    // deklarasi variabel
    int a, b, op;
    float result;
    printf("Masukkan angka pertama : ");
    scanf("%d", &a);
    printf("Masukkan angka kedua : ");
    scanf("%d", &b);

    // pilih operasi
    printf("Pilih operasi :\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih : ");
    scanf("%d", &op);

    // validasi operasi
    switch (op)
    {
    case 1:
        result = a + b;
        printf("Hasil %d + %d = %.1f", a, b, result);
        break;
    case 2:
        result = a - b;
        printf("Hasil %d - %d = %.1f", a, b, result);
        break;
    case 3:
        result = a * b;
        printf("Hasil %d x %d = %.1f", a, b, result);
        break;
    case 4:
        result = (float)a / b;
        printf("Hasil %d / %d = %.1f", a, b, result);
        break;
    default:
        printf("Operasi tidak tersedia");
        break;
    }
    return 0;
}