#include <stdio.h>

int main() {
//     Faça um programa que leia um número inteiro N e imprima todos os números
//      pares de 1 até N
    int n = 0;
    printf("Num: ");
    scanf("%d", &n);
    // for(int i = 0; i <= n; i++) {
    //     if(i % 2 ==0) {
    //         printf("%d\n", i);
    //     }
    // }
    int i = 0;
    while(i <= n) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    getchar();
    getchar();
    return 0;
}