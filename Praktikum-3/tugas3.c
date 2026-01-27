#include <stdio.h>

int main()
{
    int pilihan;
    printf("Restoran Mas Ilham\n");
    printf("1. Nasi Goreng\n");
    printf("2. Mie Ayam\n");
    printf("3. Soto Ayam\n");
    printf("Pilih menu :");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Anda memilih nasi goreng");
        break;
    case 2:
        printf("Anda memilih mie ayam");
        break;
    case 3:
        printf("Anda memilih soto ayam");
        break;

    default:
        printf("Menu tidak tersedia");
        break;
    }

    return 0;
}