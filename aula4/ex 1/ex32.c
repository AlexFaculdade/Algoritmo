#include <stdio.h>

int main() {
    float base, altura, area, perimetro;
    printf("base: "); 
    scanf("%f", &base);
    printf("altura: "); 
    scanf("%f", &altura);
    
    area = base*altura;
    perimetro = base*2+altura*2;
    printf("area: %f, perimetro: %f\n", area, perimetro);
    scanf("%f", &perimetro);
    return 0;
}