#include <stdio.h>

int main() {
    // Escreva um programa que leia um número inteiro N e conte quantos números
    // ímpares existem de 1 até N
    int n = 0, cont = 0;
    printf("N: ");
    scanf("%d", &n);
    // for(int i = 0; i <= n; i++) {
    //     if(i % 2 != 0) {
    //         cont++;
    //     }
    // }
    int i = 0;
    while(i <= n) {
        if(i % 2 != 0) {
            cont++;
        }
        i++;
    }
    printf("Nesse intervalo tem: %d impares", cont);
    getchar();
    getchar();
    return 0;
}