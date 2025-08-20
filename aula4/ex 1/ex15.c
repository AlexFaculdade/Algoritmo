#include <stdio.h>

int main() {
    float tempo, velocidadeMedia,distancia;
    printf("tempo: "); 
    scanf("%f", &tempo);

    printf("velocidadeMedia: "); 
    scanf("%f", &velocidadeMedia);
    
    distancia = velocidadeMedia *tempo;
    printf("distancia: %f\n", distancia);
    scanf("%f", &distancia);
    return 0;
}