#include <stdio.h>
#include <string.h>

// 2.0 Reverse String
int main()
{
    char str[50];
    printf("Masukkan String: ");
    scanf("%[^\n]s", str);

    printf("Karakter Pada String (Dibalik):");
    for (int i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}