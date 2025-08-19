#include <stdio.h>

int main() {
    float imc, altura, peso;
    printf("altura: ");
    scanf("%f", &altura);
    printf("peso: ");
    scanf("%f", &peso);
    
    imc = peso/(altura*altura);
    printf("imc: %f\n", imc);
    scanf("%f", &imc);
    return 0;
}