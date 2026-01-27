#include <stdio.h>

// SOAL FUNGSI 5 NILAI TERBESAR
int findMax(int a, int b, int c);

// PROGRAM UTAMA
int main()
{
    int num1, num2, num3;
    printf("Masukkan tiga angka: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    findMax(num1, num2, num3);
    printf("Nilai terbesar adalah %d", findMax(num1, num2, num3));
    return 0;
}

// CARI NILAI TERBESAR
int findMax(int a, int b, int c)
{
    int list[] = {a, b, c};
    int maxNum = list[0];
    for (int i = 1; i <= 3; i++)
    {
        if (list[i] > maxNum)
        {
            maxNum = list[i];
        }
    }
    return maxNum;
}