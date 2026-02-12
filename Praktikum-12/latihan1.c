#include <stdio.h>

struct Nilai
{
    char nama[50];
    float mtk, fisika, kimia;
};

int main()
{
    struct Nilai n;

    printf("Nama: ");
    fgets(n.nama, sizeof(n.nama), stdin);

    printf("Nilai MTK: ");
    scanf("%f", &n.mtk);
    printf("Nilai Fisika: ");
    scanf("%f", &n.fisika);
    printf("Nilai Kimia: ");
    scanf("%f", &n.kimia);

    float rata = (n.mtk + n.fisika + n.kimia) / 3;
    printf("\nRata-rata nilai %s: %.2f\n", n.nama, rata);
    return 0;
}
