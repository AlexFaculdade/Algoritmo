#include <stdio.h>

int main() {
    // Escreva um programa que leia um número N e imprima a tabuada desse
    // número de 1 a 10 usando for
    int n = 0;
    printf("Tabuada: ");
    scanf("%d", &n);
    printf("Tabuado do: %d\n", n);
    // for(int i = 0; i < 11; i++) {
    //     int valor = n * i;
    //     printf("%d\n", valor);
    // }
    int i = 0;
    while(i < 11) {
        int valor = n * i;
        printf("%d\n", valor);
        i++;
    }
    getchar();
    getchar();
    return 0;
}