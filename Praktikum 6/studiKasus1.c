#include <stdio.h>

// TUGAS 1.0 PROSEDUR KONVERSI SUHU CELCIUS
void konversiSuhu(float celcius)
{
    float fahrenheit, reamur, kelvin;
    fahrenheit = 1.8 * celcius + 32.0;
    reamur = 0.8 * celcius;
    kelvin = celcius + 273.15;

    printf("\n=== Hasil Konversi ===");
    printf("\nFahrenheit = %.2fF", fahrenheit);
    printf("\nReamur     = %.2fR", reamur);
    printf("\nKelvin     = %.2fK", kelvin);
}

int main()
{
    float celcius;
    printf("=== Program Konversi Suhu Celcius === \n");
    printf("Masukkan suhu dalam Celcius : ");
    scanf("%f", &celcius);

    konversiSuhu(celcius);
    return 0;
}