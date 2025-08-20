#include <stdio.h>

int main() {
    float altura, largura, comprimento, volume;
    printf("altura: "); 
    scanf("%f", &altura);
    printf("largura: "); 
    scanf("%f", &largura);
    printf("comprimento: "); 
    scanf("%f", &comprimento);
    
    volume = altura*largura*comprimento;
    printf("volume: %f\n", volume);
    scanf("%f", &volume);
    return 0;
}