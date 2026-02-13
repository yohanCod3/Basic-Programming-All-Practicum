#include <stdio.h>
#include <string.h>

// 4.0 Palindrome
int main()
{
    char text[50];
    int palindrome = 1;

    printf("Masukkan teks :");
    scanf("%[^\n]s", text);

    int len = strlen(text);

    for (int i = 0; i < len / 2; i++)
    {
        if (text[i] != text[len - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Bukan palindrome\n");
    }
    return 0;
}