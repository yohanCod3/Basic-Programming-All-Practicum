#include <stdio.h>
#include <string.h>

// 1.0 Frekuensi char pada String
int main()
{
    char text[200];
    int frekuensi[256] = {0};
    int urutan[256] = {0};
    int orderIndex = 0;

    printf("Masukkan kalimat :");
    scanf("%[^\n]s", text);

    int len = strlen(text);

    // loop seluruh teks
    for (int i = 0; i < len; i++)
    {
        char c = text[i];

        // mengubah huruf kapital
        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }

        if (c == ' ')
        {
            continue;
        }

        if (frekuensi[c] == 0)
        {
            urutan[c] = orderIndex++;
        }
        frekuensi[c]++;
    }

    printf("Frekuensi karakter : \n");
    for (int i = 0; i < orderIndex; i++)
    {
        for (int j = 0; j < 256; j++)
        {
            if (frekuensi[j] > 0 && urutan[j] == i)
            {
                printf("%c -> %d\n", j, frekuensi[j]);
            }
        }
    }
    return 0;
}