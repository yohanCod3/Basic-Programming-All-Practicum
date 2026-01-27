#include <stdio.h>
int main()
{
    // CONTOH ARRAY 2.0 INSERT
    int angka[6] = {10, 20, 30, 40, 50};
    int n = 5;   // jumlah elemen saat ini
    int pos = 2; // posisi sisip (indeks ke-2)
    int nilaiBaru = 25;

    printf("Array sebelum insert:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", angka[i]);
    }

    // Geser elemen ke kanan
    for (int i = n; i > pos; i--)
    {
        angka[i] = angka[i - 1];
    }
    angka[pos] = nilaiBaru;
    n++;
    printf("\nArray setelah insert:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", angka[i]);
    }
    return 0;
}
