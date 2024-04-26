#include <stdio.h>

float celcius(float f){
    return (f - 32) * 5 / 9;
}

float fahrenheit(float c){
    return (c * 9 / 5) + 32;
}

int main (){
    float temperatura;
    char tipo;

    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);

    printf("¿Qué tipo de conversión desea realizar? (c: Celsius a Fahrenheit, f: Fahrenheit a Celsius): ");
    scanf(" %c", &tipo);

    if (tipo == 'c') {
        float resultado = fahrenheit(temperatura);
        printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit.\n", temperatura, resultado);
    } else if (tipo == 'f') {
        float resultado = celcius(temperatura);
        printf("%.2f grados Fahrenheit equivalen a %.2f grados Celsius.\n", temperatura, resultado);
    } else {
        printf("Tipo de conversión no válido.\n");
    }

    return 0;
}

   

