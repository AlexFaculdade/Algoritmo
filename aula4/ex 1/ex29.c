#include <stdio.h>

int main() {
    float tempo, distancia, velocidadeMedia;
    printf("distancia: "); 
    scanf("%f", &distancia);
    printf("velocidadeMedia: "); 
    scanf("%f", &velocidadeMedia);
    
    tempo = distancia/velocidadeMedia;
    printf("tempo: %f\n", tempo);
    scanf("%f", &tempo);
    return 0;
}