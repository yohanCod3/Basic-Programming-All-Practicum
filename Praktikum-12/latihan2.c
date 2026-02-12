#include <stdio.h>
struct Mobil
{
    char merk[30];
    char warna[20];
    int tahun;
};
int main()
{
    struct Mobil m = {"Toyota Avanza", "Hitam", 2020};
    printf("Merk : %s\n", m.merk);
    printf("Warna : %s\n", m.warna);
    printf("Tahun : %d\n", m.tahun);
    return 0;
}
