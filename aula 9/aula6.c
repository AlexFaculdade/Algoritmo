#include <stdio.h> 

int main() {
    // Escreva um programa que leia 10 números e calcule a média deles utilizando for.
    int soma = 0;
    float media = 0;
    // for(int i = 0; i < 10; i++) {
    //     int valor = 0;
    //     printf("Num %d: ", i);
    //     scanf("%d", &valor);
    //     soma += valor;
    // }
    int i = 0;
    while(i < 10) {
        int valor = 0;
        printf("Num %d: ", i);
        scanf("%d", &valor);
        soma += valor;
        i++;
    }
    media = (float) soma/10;
    printf("Media final: %.2f", media);
    getchar();
    getchar();

    return 0;
}