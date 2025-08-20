#include <stdio.h>

int main() {
    float raio, perimetro;
    printf("raio: "); 
    scanf("%f", &raio);
    
    perimetro = raio*3.14*2;
    printf("perimetro: %f\n", perimetro);
    scanf("%f", &perimetro);
    return 0;
}