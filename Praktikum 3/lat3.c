#include <stdio.h>
int main()
{
    // program IF ELSE

    // deklarasi variabel
    int number1, number2;
    printf("Masukkan 2 integer");
    scanf("%d %d", &number1, &number2);

    // Cek 2 variabel sama atau tidak
    if (number1 == number2)
    {
        printf("Result: %d = %d", number1, number2);
    }
    // Cek number 1 diatas number 2 atau tidak
    else if (number1 > number2)
    {
        printf("Result: %d > %d", number1, number2);
    }
    // Cek jika kedua kondisi salah
    else
    {
        printf("Result: %d < %d", number1, number2);
    }
    return 0;
}