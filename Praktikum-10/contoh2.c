#include <stdio.h>
int main()
{
    int nilai[3][3] = {
        {80, 85, 90},
        {75, 70, 80},
        {60, 65, 70}};
    int total = 0;
    float rata;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total += nilai[i][j];
        }
    }
    rata = total / 9.0;
    printf("Total nilai = %d\n", total);
    printf("Rata-rata = %.2f\n", rata);
    return 0;
}