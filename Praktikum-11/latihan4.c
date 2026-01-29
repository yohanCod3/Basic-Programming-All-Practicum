#include <stdio.h>

int main()
{
    // array tiga dimensi untuk IPS tiap matkul per semester
    float matkul[2][3][4] = {
        {{3.0, 3.2, 2.8, 3.5},
         {3.1, 3.3, 3.0, 3.4},
         {3.5, 3.7, 3.6, 3.8}},
        {{2.8, 3.0, 2.9, 3.2},
         {3.0, 3.1, 3.3, 3.4},
         {3.2, 3.5, 3.4, 3.6}}};

    // menampilkan list IPS matkul per semester
    for (int i = 0; i < 2; i++)
    {
        printf("Mahasiswa %d:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Semester %d (Matkul 1,2,3,4): ", j + 1);
            for (int k = 0; k < 4; k++)
            {
                printf("%.1f  ", matkul[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // menampilkan IPK per semester dan IPK akhir
    for (int i = 0; i < 2; i++)
    {
        float total = 0;
        float IPK;
        printf("Mahasiswa %d:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            float totalMatkul = 0;
            float rataRata;
            for (int k = 0; k < 4; k++)
            {
                totalMatkul += matkul[i][j][k];
            }
            rataRata = totalMatkul / 4.0;
            total += rataRata;
            printf("Semester %d: IP = %.2f ", j + 1, rataRata);
            printf("\n");
        }
        IPK = total / 3.0;
        printf(" > IPK Akhir: %.2f", IPK);
        printf("\n\n");
    }

    return 0;
}