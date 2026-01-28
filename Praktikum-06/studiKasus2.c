#include <stdio.h>

// TUGAS 2.0 PROSEDUR TAHUN KABISAT
void kabisat(int tahun)
{
    if (tahun % 4 == 0)
    {
        if (tahun % 100 == 0 && tahun % 400 == 0)
        {
            printf("Tahun kabisat");
        }
        else if (tahun % 100 == 0 && tahun % 400 != 0)
        {
            printf("Tahun Non kabisat");
        }
        else
        {
            printf("Tahun kabisat");
        }
    }
    else
    {
        printf("Tahun non kabisat");
    }
}

int main()
{
    int tahun;
    printf("Masukkan tahun : ");
    scanf("%d", &tahun);

    kabisat(tahun);
    return 0;
}