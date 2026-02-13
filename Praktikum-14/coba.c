#include <stdio.h>
#include <string.h>

typedef struct
{
    char ch;
    int freq;
} Item;

int main()
{
    char text[200];
    int frekuensi[256] = {0};

    printf("Masukkan kalimat : ");
    fgets(text, sizeof(text), stdin);

    // hapus newline
    text[strcspn(text, "\n")] = '\0';

    int len = strlen(text);

    // hitung frekuensi
    for (int i = 0; i < len; i++)
    {
        unsigned char c = text[i];

        // ubah uppercase ke lowercase
        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }

        // abaikan spasi
        if (c == ' ')
            continue;

        frekuensi[c]++;
    }

    // masukkan ke list untuk sorting
    Item list[256];
    int count = 0;

    for (int j = 0; j < 256; j++)
    {
        if (frekuensi[j] > 0)
        {
            list[count].ch = j;
            list[count].freq = frekuensi[j];
            count++;
        }
    }

    // bubble sort (descending by frequency)
    for (int a = 0; a < count - 1; a++)
    {
        for (int b = 0; b < count - a - 1; b++)
        {
            if (list[b].freq < list[b + 1].freq)
            {
                Item temp = list[b];
                list[b] = list[b + 1];
                list[b + 1] = temp;
            }
        }
    }

    // tampilkan hasil
    printf("\nFrekuensi karakter (diurutkan terbesar ke terkecil):\n");
    for (int i = 0; i < count; i++)
    {
        printf("%c -> %d\n", list[i].ch, list[i].freq);
    }

    return 0;
}
