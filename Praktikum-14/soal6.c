#include <stdio.h>
#include <string.h>

int main()
{
    // 6.0 Konversi ke camelCase
    char text[50];
    char hasil[100] = "";
    char kata[50];

    printf("Masukkan teks :");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int kataPertama = 1;
    char *token = strtok(text, " ");

    while (token != NULL)
    {
        strcpy(kata, token);

        if (kataPertama)
        {
            strcat(hasil, kata);
            kataPertama = 0;
        }
        else
        {
            char pertama = kata[0];

            char upper = pertama;
            if (upper >= 'a' && upper <= 'z')
            {
                upper = upper - 32;
            }

            strncat(hasil, &upper, 1);

            // strncat(hasil, &pertama, 1);

            strcat(hasil, kata + 1);
        }
        token = strtok(NULL, " ");
    }
    printf("Output: %s\n", hasil);
    return 0;
}