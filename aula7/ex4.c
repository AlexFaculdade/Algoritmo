#include <stdio.h>

int main() {
    // Escreva um programa que leia um número dentro de uma estrutura de repetição e que
    // armazene a soma deste número com os valores anteriores, até que a soma ultrapasse 100. Ao fim,
    // apresente o valor da soma. Utilize a estrutura do while.

    int soma = 0, numero = 0;
    printf("Digite um valor para numero: ");
    scanf("%d", &numero);
    while(soma <= 100) {
        if(numero < 0) {
            printf("Digite um novo valor para numero: ");
        scanf("%d", &numero);
        }
        printf("Valor atual de numero: %d \n", numero);
        soma += numero;
        printf("Valor atual de soma: %d \n", soma);

        
        numero--;
    }

    printf("Valor final de soma: %d", soma);
    getchar();
    getchar();

    return 0;
}