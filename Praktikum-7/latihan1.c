#include <stdio.h>

// SOAL FUNGSI 1 MENCARI NILAI FAKTORIAL
int factorialNum(int num);

// PROGRAM UTAMA
int main()
{
    int numUser;
    printf("Masukkan angka : ");
    scanf("%d", &numUser);
    printf("Faktorial dari %d adalah %d", numUser, factorialNum(numUser));
    return 0;
}

// CARI NILAI FAKTORIAL
int factorialNum(int num)
{
    int i, factorial = 1;
    for (i = 1; i <= num; i++)
    {
        factorial *= i;
        // printf("%d\n", factorial);
    }
    return factorial;
}