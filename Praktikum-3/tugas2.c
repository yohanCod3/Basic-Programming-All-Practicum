#include <stdio.h>

int main()
{

    // formulir awal
    printf("Formulir Pendaftaran Online\n");
    printf("1. Fakultas Sains dan Teknologi\n");
    printf("2. Fakultas Pariwisata dan Humaniora\n");
    printf("3. Fakultas Ekonomi dan Bisnis\n");

    // deklarasi variabel dan memilih fakultas
    int fakultas, prodi;
    printf("Pilih Fakultas : ");
    scanf("%d", &fakultas);

    // validasi fakultas
    if (fakultas == 1)
    {
        // list prodi FST
        printf("Selamat datang di FST\n");
        printf("1. Informatika\n");
        printf("2. Rekayasa Perangkat Lunak\n");
        printf("3. Sistem Informasi\n");
        printf("Silahkan memilih program studi :");
        scanf("%d", &prodi);

        // validasi prodi
        switch (prodi)
        {
        case 1:
            printf("Anda memilih prodi Informatika");
            break;
        case 2:
            printf("Anda memilih prodi Rekayasa Perangkat Lunak");
            break;
        case 3:
            printf("Anda memilih prodi Sistem Informasi");
            break;
        default:
            printf("Prodi tidak tersedia");
            break;
        }
    }
    else if (fakultas == 2)
    {
        // list prodi FPH
        printf("Selamat datang di FPH\n");
        printf("1. Pariwisata\n");
        printf("2. Bahasa Inggris\n");
        printf("Silahkan memilih program studi :");
        scanf("%d", &prodi);

        // validasi prodi
        switch (prodi)
        {
        case 1:
            printf("Anda memilih prodi Pariwisata");
            break;
        case 2:
            printf("Anda memilih prodi Bahasa Inggris");
            break;
        default:
            printf("Prodi tidak tersedia");
            break;
        }
    }
    else if (fakultas == 3)
    {
        // list prodi FEB
        printf("Selamat datang di FEB\n");
        printf("1. Akuntansi\n");
        printf("2. Manajemen\n");
        printf("Silahkan memilih program studi :");
        scanf("%d", &prodi);

        // validasi prodi
        switch (prodi)
        {
        case 1:
            printf("Anda memilih prodi Akuntansi");
            break;
        case 2:
            printf("Anda memilih prodi Manajemen");
            break;
        default:
            printf("Prodi tidak tersedia");
            break;
        }
    }

    return 0;
}