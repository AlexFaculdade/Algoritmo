#include <stdio.h>

int main() {
    //Escreva um programa em C que use o for para imprimir os números de 1 a 10

    // for(int i = 0; i < 10; i++) {
    //     printf("%d\n", i+1);
    // }
    int i = 0;
    while(i < 10) {
        printf("%d\n", i+1);
        i++;
    }
    getchar();
    getchar();
    return 0;
}