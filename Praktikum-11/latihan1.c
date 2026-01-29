#include <stdio.h>

int main()
{
    // array tiga dimensi untuk nilai
    int mahasiswa[2][3][3] = {
        {{80, 75, 90},
         {60, 85, 88},
         {70, 78, 84}},
        {{82, 77, 89},
         {65, 90, 92},
         {75, 80, 86}}};

    // list mata kuliah
    char matkul[3][15] = {"Pemrograman", "Agama"};

    // menampilkan list nilai mahasiswa
    for (int i = 0; i < 2; i++)
    {
        printf("Mata kuliah %s (Tugas, UTS, UAS)\n", matkul[i]);
        for (int j = 0; j < 3; j++)
        {
            printf("Mahasiswa %d: ", j + 1);
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", mahasiswa[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // menampilkan rata rata nilai mahasiswa
    for (int i = 0; i < 2; i++)
    {
        printf("Mata kuliah %s\n", matkul[i]);
        for (int j = 0; j < 3; j++)
        {
            float total = 0;
            float rataRata;
            for (int k = 0; k < 3; k++)
            {
                total += mahasiswa[i][j][k];
            }
            rataRata = total / 3.0;
            printf("Mahasiswa %d rata-rata: %.2f", j + 1, rataRata);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}