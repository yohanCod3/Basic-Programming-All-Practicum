#include <stdio.h>
#include <string.h>

int main()
{
    // 7.0 Menghapus duplikasi kata dan menjaga urutan asli
    char text[200];
    char kata[100][50];
    int terpakai[100] = {0};
    int count = 0;

    printf("Masukkan kalimat: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (int i = 0; text[i]; i++)
    {
        if (text[i] == ',' || text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            text[i] = ' ';
        }
    }
    char *token = strtok(text, " ");
    while (token != NULL)
    {
        strcpy(kata[count], token);

        for (int i = 0; kata[count][i]; i++)
        {
            if (kata[count][i] >= 'A' && kata[count][i] <= 'Z')
            {
                kata[count][i] = kata[count][i] + 32;
            }
        }
        count++;
        token = strtok(NULL, " ");
    }

    printf("Output: ");

    for (int i = 0; i < count; i++)
    {
        if (terpakai[i])
        {
            continue;
        }
        printf("%s ", kata[i]);

        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(kata[i], kata[j]) == 0)
            {
                terpakai[j] = 1;
            }
        }
    }
    printf("\n");
    return 0;
}