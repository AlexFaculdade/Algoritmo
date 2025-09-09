#include <stdio.h>

int main() {
    int soma = 0, numero = 0;
    printf("Digite uma valor para numero: ");
    scanf("%d", &numero);
    while(numero > 0) {
        printf("Valor atual de numero: %d \n", numero);
        printf("Valor atual de soma: %d \n", soma);

        soma += numero;
        numero--;
    }

    printf("Valor final de soma: %d", soma);
    getchar();
    getchar();

    return 0;
}