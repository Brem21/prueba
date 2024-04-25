#include <stdio.h>
#include <math.h>

float distanciaEntrePuntos(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float calcularHipotenusa(float cateto1, float cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

float calcularAreaTriangulo(float lado1, float lado2, float lado3) {
 
    float semiperimetro = (lado1 + lado2 + lado3) / 2;
    return sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    float lado1, lado2, lado3,M_PI;
    float areaTotal, areaSombreada, distancia, hipotenusa;

  
    printf("Ingrese las coordenadas del primer punto (x1 y y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Ingrese las coordenadas del segundo punto (x2 y y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Ingrese las coordenadas del tercer punto (x3 y y3): ");
    scanf("%f %f", &x3, &y3);

  
    lado1 = distanciaEntrePuntos(x1, y1, x2, y2);
    lado2 = distanciaEntrePuntos(x2, y2, x3, y3);
    lado3 = distanciaEntrePuntos(x3, y3, x1, y1);


    areaTotal = calcularAreaTriangulo(lado1, lado2, lado3);

   
    distancia = distanciaEntrePuntos(x1, y1, x2, y2);

   
    hipotenusa = calcularHipotenusa(lado1, lado2);

   
    float radio = distancia;
    areaSombreada = areaTotal - (M_PI * pow(radio, 2)); 
    printf("El area total del triangulo es: %f\n", areaTotal);
    printf("El area sombreada es: %f\n", areaSombreada);
    printf("La distancia entre los puntos (x1, y1) y (x2, y2) es: %f\n", distancia);
    printf("La hipotenusa del lado 1 y lado 2 del triangulo es: %f\n", hipotenusa);

    return 0;
}
