#include <stdio.h>

int main()
{
    // SOAL ARRAY 4.0
    int array[7] = {12, 45, 23, 67, 34, 89, 10};
    int max = array[0];
    int min = array[0];

    printf("Isi array : ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("\nNilai maksimum : %d", max);
    printf("\nNilai minimum : %d", min);

    return 0;
}