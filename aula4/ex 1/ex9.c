#include <stdio.h>

int main() {
    float velocidadeMedia, espaco, tempo;
    printf("espaco: ");
    scanf("%f", &espaco);
    printf("tempo: ");
    scanf("%f", &tempo);
    
    velocidadeMedia = espaco/tempo;
    printf("velocidade media: %f\n", velocidadeMedia);
    scanf("%f", &velocidadeMedia);
    return 0;
}