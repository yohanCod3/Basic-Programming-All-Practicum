#include <stdio.h>

// object mahasiswa
struct Mahasiswa
{
    char nama[50];
    long int nim;
    char prodi[50];
};

// list array untuk menampung object
struct Mahasiswa list[5];
int jumlahData = 0;

// fungsi input data mahasiswa
void inputData()
{
    if (jumlahData >= 5) // jika melebihi kapasitas
    {
        printf("Penuh");
        return;
    }
    printf("Masukkan nama lengkap:");
    scanf(" %[^\n]s", &list[jumlahData].nama);
    printf("Masukkan NIM:");
    scanf(" %ld", &list[jumlahData].nim);
    printf("Masukkan prodi:");
    scanf(" %[^\n]s", &list[jumlahData].prodi);
    jumlahData += 1;

    printf("Data ditambahkan\n\n");
};

// fungsi melihat data mahasiswa
void lihatData()
{
    if (jumlahData == 0)
    {
        printf("Data mahasiswa kosong\n");
        return;
    }
    for (int i = 0; i < jumlahData; i++)
    {
        printf("\nData mahasiswa ke-%d\n", i + 1);
        printf("Nama : %s\n", list[i].nama);
        printf("NIM : %ld\n", list[i].nim);
        printf("Prodi : %s\n\n", list[i].prodi);
    }
}

// fungsi menghapus data mahasiswa
void hapusData()
{
    // input urutan list yang akan dihapus
    int pilih;
    printf("Pilih nomor data yang akan dihapus :");
    scanf("%d", &pilih);

    // jika input tidak valid
    if (pilih < 1 || pilih > jumlahData)
    {
        printf("Data tidak ditemukan/tidak valid\n\n");
        return;
    }

    int index = pilih - 1; // index untuk loop geser ke kiri

    // geser data mahasiswa ke kiri untuk menghilangkan data yang dihapus
    for (int i = index; i < jumlahData; i++)
    {
        list[i] = list[i + 1];
    }
    printf("Data ke %d berhasil terhapus\n\n", pilih);
    jumlahData -= 1;
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
            inputData();
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