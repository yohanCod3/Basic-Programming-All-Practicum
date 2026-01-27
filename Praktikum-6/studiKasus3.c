#include <stdio.h>

// TUGAS 3.0 PROSEDUR TEKANAN DARAH
void tekananDarah(int sistolik, int diastolik)
{
    if (sistolik < 120 && diastolik < 80)
    {
        printf("Kategori: Normal");
    }
    else if (120 <= sistolik && sistolik <= 139 || 80 <= diastolik && diastolik <= 89)
    {
        printf("Kategori: Prehipertensi");
    }
    else if (140 <= sistolik && sistolik <= 159 || 90 <= diastolik && diastolik <= 99)
    {
        printf("Kategori: Hipertensi Tingkat 1");
    }
    else if (sistolik >= 160 || diastolik >= 100)
    {
        printf("Kategori: Hipertensi Tingkat 2");
    }
}

int main()
{
    int sistolik, diastolik;
    printf("Masukkan tekanan sistolik (mmHg):");
    scanf("%d", &sistolik);
    printf("Masukkan tekanan diastolik (mmHg):");
    scanf("%d", &diastolik);

    tekananDarah(sistolik, diastolik);

    return 0;
}