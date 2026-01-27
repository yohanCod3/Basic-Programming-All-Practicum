#include <stdio.h>

int main()
{
    // SOAL ARRAY 2.0
    int array[5] = {1, 2, 3, 4, 5};

    printf("Array sebelum dibalik:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nArray setelah dibalik:\n");
    for (int j = 4; j >= 0; j--)
    {
        printf("%d ", array[j]);
    }
    return 0;
}