#include <stdio.h>
#include <string.h>

// 3.0 Delete duplikat char
void hapusDuplikat(char str[])
{
    int sudahMuncul[256] = {0};
    int indexBaru = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        unsigned char c = str[i];

        if (!sudahMuncul[c])
        {
            sudahMuncul[c] = 1;
            str[indexBaru++] = c;
        }
    }

    str[indexBaru] = '\0';
}
int main()
{
    char teks[200];
    printf("Masukkan string: ");
    scanf("%[^\n]s", teks);

    hapusDuplikat(teks);

    printf("Setelah duplikat dihapus: %s\n", teks);
    return 0;
}
