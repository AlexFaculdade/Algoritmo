#include <stdio.h>

int main() {
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Neutro");
    } else if(num % 2 ==0) {
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }

    scanf("%d", &num);
}