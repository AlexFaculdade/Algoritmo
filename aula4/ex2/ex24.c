#include <stdio.h>

int main() {
    float velocidade;

    printf("Velocidade: ");
    scanf("%f", &velocidade);

    if(velocidade > 110) {
        printf("Velocidade acima do limite");
    } else if(velocidade >= 80 && velocidade <= 110) {
        printf("Velocidade dentro do limite");
    } else {
        printf("Velocidade abaixo do recomendado");
    }

    getchar();
    getchar();
}