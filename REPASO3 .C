/*CRA UN PROGRAMA QUE SOLICITE AL USUARIO DOS NUMEROS Y UNA OPERACION(SUMA, RESTA, MULTIPLICACION, DIVISION Y LUEGO RELAICE LAS OPERACIONES DESADA E IMPRIMA RESULTADOS )*/
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacion;

    // Solicitar al usuario que ingrese dos números y una operación
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    printf("Ingrese la operación a realizar (+, -, *, /): ");
    scanf(" %c", &operacion);

    // Realizar la operación deseada
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("El resultado de la multiplicación es: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("El resultado de la división es: %.2f\n", resultado);
            } else {
                printf("Error: No se puede dividir por cero.\n");
            }
            break;
        default:
            printf("Operación no válida. Por favor, ingrese una operación válida.\n");
    }

    return 0;
}
