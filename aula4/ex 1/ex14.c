#include <stdio.h>

int main() {
    float valor, valor2,valor3, peso,peso2,peso3, media;
    printf("valor: "); 
    scanf("%f", &valor);

    printf("valor2: "); 
    scanf("%f", &valor2);

    printf("valor3: "); 
    scanf("%f", &valor3);

    printf("peso: "); 
    scanf("%f", &peso);

    printf("peso2: "); 
    scanf("%f", &peso2);

    printf("peso3: "); 
    scanf("%f", &peso3);
    
    media = ((valor * peso) + (valor2 * peso2) + (valor3 * peso3)) / (peso+peso2+peso3);
    printf("Media ponderada: %f\n", media);
    scanf("%f", &media);
    return 0;
}