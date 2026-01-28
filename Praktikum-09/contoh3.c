#include <stdio.h>
int main()
{
    // CONTOH ARRAY 3.0 UPDATE
    int angka[5] = {10, 20, 30, 40, 50};
    printf("angka[2] Sebelum update: %d\n", angka[2]);

    angka[2] = 100; // ubah elemen indeks ke-2
    printf("angka[2] Setelah update: %d\n", angka[2]);
    return 0;
}
