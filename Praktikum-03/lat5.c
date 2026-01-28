#include <stdio.h>
int main()
{
    // program switch

    // deklarasi variabel
    char operation;
    double n1, n2;
    printf("Masukkan operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Masukkan 2 angka: ");
    scanf("%lf %lf", &n1, &n2);

    // validasi operasi
    switch (operation)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;
    // operator tidak tersedia
    default:
        printf("Operator tidak tersedia");
    }
    return 0;
}
