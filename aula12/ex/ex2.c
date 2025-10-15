#include <stdio.h>

int main() {
    // Crie um programa que leˆ 6 valores inteiros e, em seguida, mostre na tela os valores lidos
    int vetor[6];
    int sizeVetor = sizeof(vetor) / sizeof(vetor[0]);
    for(int i = 0; i < sizeVetor; i++) {
        int valor = 0;
        printf("Digite o valor do index %d: ", i);
        scanf("%d", &valor);
        vetor[i] = valor;
    }
    for(int i = 0; i < sizeVetor; i++) {
        printf("Valor da linha %d: %d\n", i, vetor[i]);
    }

    getchar();
    getchar();

    return 0;
}