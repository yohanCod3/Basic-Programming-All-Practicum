#include <stdio.h>
struct Barang
{
    char nama[30];
    int stok;
    int harga;
};

int main()
{
    struct Barang b[3] = {
        {"Buku Tulis", 50, 3000},
        {"Pulpen", 100, 2000},
        {"Penghapus", 80, 1500}};
    printf("Daftar Barang:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s - Stok: %d - Harga: %d\n",
               b[i].nama, b[i].stok, b[i].harga);
    }
    return 0;
}
