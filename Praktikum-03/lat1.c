#include <stdio.h>
int main()
{
    // program IF

    // deklarasi variabel
    int number;
    printf("Masukkan integer : ");
    scanf("%d", &number);

    // benar jika nomor kurang dari 0
    if (number < 0)
    {
        printf("You entered %d.\n", number);
    }
    printf("The if statement is easy.");

    return 0;
}