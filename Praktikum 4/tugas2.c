#include <stdio.h>

int main()
{

    int i, deret, deret1, deret2, deret3;

    printf("Masukkan jumlah deret : ");
    scanf("%d", &deret);

    deret1 = 0;
    deret2 = 1;

    printf("%d\n", deret1);
    printf("%d\n", deret2);

    for (i = 3; i <= deret; i++)
    {
        deret3 = deret1 + deret2;
        printf("%d\n", deret3);

        deret1 = deret2;
        deret2 = deret3;
    }

    return 0;
}