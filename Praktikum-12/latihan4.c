#include <stdio.h>

struct Barang
{
    char nama[30];
    int harga;
};

struct Transaksi
{
    struct Barang item;
    int jumlah;
};

int main()
{
    struct Transaksi t = {{"Pensil", 2000}, 5};
    int total = t.item.harga * t.jumlah;
    printf("Transaksi:\n");
    printf("Barang : %s\n", t.item.nama);
    printf("Harga : %d\n", t.item.harga);
    printf("Jumlah : %d\n", t.jumlah);
    printf("Total : %d\n", total);
    return 0;
}
