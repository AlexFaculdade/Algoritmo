#include <stdio.h>

int main() {
    float litros, gasto, distancia;
    printf("distancia em km: "); 
    scanf("%f", &distancia);
    printf("gasto em litros por km: "); 
    scanf("%f", &gasto);

    litros = distancia/gasto;

    printf("litros: %f\n", litros);
    scanf("%f", &litros);
    return 0;
}