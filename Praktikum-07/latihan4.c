#include <stdio.h>

// SOAL FUNGSI 4 GANJIL GENAP
char *genapGanjil(int angka);

// PROGRAM UTAMA
int main()
{
    int angkaUser;
    printf("Masukkan angka : ");
    scanf("%d", &angkaUser);
    printf("%d adalah bilangan %s", angkaUser, genapGanjil(angkaUser));
    return 0;
}
// CEK GANJIL GENAP
char *genapGanjil(int angka)
{
    if (angka % 2 == 0)
    {
        return "GENAP";
    }
    else
    {
        return "GANJIL";
    }
}