#include <stdio.h>

int main()
{

    int a, i;
    printf("Masukkan angka genap : ");
    scanf("%d", &a);

    for (i = 2; i <= a; i += 2)
    {
        printf("%d ", i);
    }

    return 0;
}