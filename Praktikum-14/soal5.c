#include <stdio.h>
#include <string.h>

int main()
{
    // 5.0 Substring manual
    char kata[50];
    char substring[50];

    printf("Masukkan kata: ");
    scanf(" %[^\n]s", kata);
    
    printf("Masukkan kata: ");
    scanf(" %[^\n]s", substring);

    int lenKata = strlen(kata);
    int lenSubstring = strlen(substring);

    int foundIndex = -1;

    // mencari substring
    for (int i = 0; i <= lenKata - lenSubstring; i++)
    {
        int match = 1;
        for (int j = 0; j < lenSubstring; j++)
        {
            if (kata[i + j] != substring[j])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            foundIndex = i;
            break;
        }
    }
    // validasi substring ditemukan atau tidak
    if (foundIndex != -1)
    {
        printf("Substring ditemukan pada index: %d\n", foundIndex);
    }
    else
    {
        printf("Substring tidak ditemukan\n");
    }
    return 0;
}