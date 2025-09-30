#include <stdio.h>

int main() {
    // Escreva um programa em C que leia um número N e calcule a soma de todos os números de 1 até N usando for.
    int n = 0, soma = 0;
    printf("Digite o num: ");
    scanf("%d", &n);
    // for(int i = 0; i <= n; i++) {
    //     soma += i;
    // }
    int i = 0;
    while(i <= n) {
        soma+= i;
        i++;
    }
    printf("%d", soma);
    getchar();
    getchar();
    return 0;
}