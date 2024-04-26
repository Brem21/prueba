#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float calcularAreaCirculo(float radio) {
    return M_PI * pow(radio, 2);
}

float calcularPerimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

int main() {
    float x1, y1, x2, y2;
    float radio, base, altura;
    float distancia, areaCirculo, perimetroRectangulo;

    printf("Ingrese las coordenadas del centro del círculo (x, y): ");
    scanf("%f %f", &x1, &y1);
    printf("Ingrese las coordenadas de un punto en el borde del círculo (x, y): ");
    scanf("%f %f", &x2, &y2);

    distancia = calcularDistancia(x1, y1, x2, y2);
    areaCirculo = calcularAreaCirculo(distancia);

    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);

    perimetroRectangulo = calcularPerimetroRectangulo(base, altura);

    printf("La distancia entre el centro y el borde del círculo es: %f\n", distancia);
    printf("El área del círculo es: %f\n", areaCirculo);
    printf("El perímetro del rectángulo es: %f\n", perimetroRectangulo);

    return 0;
}
