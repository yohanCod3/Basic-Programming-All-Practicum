#include <stdio.h>

struct Mahasiswa
{
    char nama[50];
    long int nim;
    char prodi[50];
};

struct Mahasiswa list[5];
int jumlahData = 0;

// Fungsi menambahkan data mahasiswa
void tambahData()
{
    if (jumlahData >= 5)
    {
        printf("Data mahasiswa penuh!\n\n");
        return;
    };

    printf("Nama :");
    scanf(" %[^\n]s", &list[jumlahData].nama);
    printf("NIM :");
    scanf(" %ld", &list[jumlahData].nim);
    printf("Prodi :");
    scanf(" %[^\n]s", &list[jumlahData].prodi);

    jumlahData += 1;
    printf("Data berhasil ditambahkan\n\n");
}

// Fungsi melihat data mahasiswa
void lihatData()
{
    if (jumlahData == 0)
    {
        printf("Tidak ada data mahasiswa!\n\n");
    }
    for (int i = 0; i < jumlahData; i++)
    {
        printf("\nMahasiswa %d\n", i + 1);
        printf("Nama: %s\n", list[i].nama);
        printf("NIM: %ld\n", list[i].nim);
        printf("Prodi: %s\n", list[i].prodi);
    }
    printf("\n");
}

// Fungsi menghapus data mahasiswa
void hapusData()
{
    int hapus;
    printf("Pilih nomor data yang akan dihapus: ");
    scanf("%d", &hapus);

    if (hapus < 1 || hapus > jumlahData)
    {
        printf("Data yang akan dihapus tidak valid\n\n");
        return;
    }

    int index = hapus - 1;
    for (int i = index; i < jumlahData; i++)
    {
        list[i] = list[i + 1];
    }
    jumlahData -= 1;
    printf("Data %d berhasil dihapus\n\n", hapus);
}

int main()
{
    int pilihCrud;
    do
    {
        printf("Program CRUD Data Mahasiswa\n");
        printf("1. Tambah data mahasiswa\n");
        printf("2. Lihat data mahasiswa\n");
        printf("3. Hapus data mahasiswa\n");
        printf("4. Keluar\n");
        printf("Pilih : ");
        scanf("%d", &pilihCrud);
        switch (pilihCrud)
        {
        case 1:
            tambahData();
            break;
        case 2:
            lihatData();
            break;
        case 3:
            hapusData();
            break;
        default:
            break;
        }
    } while (pilihCrud != 4);
    return 0;
}