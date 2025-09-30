#include <stdio.h>

int main() {
    // Escreva um programa que calcule o fatorial de um número N usando for
    int n = 0, somaTotal = 1;
    printf("Num: ");
    scanf("%d", &n);
    // for(int i = 0; i <= n; i++) {
    //     if(i != 0) {
    //         somaTotal *= i;
    //     }
    // }

    int i = 0;
    while(i <= n) {
        if(i != 0) {
            somaTotal *= i;
        }
        i++;
    }
    printf("Fatorial: %d", somaTotal);
    getchar();
    getchar();
    return 0;
}