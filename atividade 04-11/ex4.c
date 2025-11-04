#include <stdio.h>

int fatorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * fatorial(n-1);
}

int main() {
    // Crie uma função que receba um número inteiro como parâmetro e retorne o seu fatorial; o fatorial de um número é o
    // resultado da multiplicação do número pelos seus antecessores maiores que 0 (zero).
    // Por exemplo: 4! = 4 * 3 * 2 * 1
    // Assinatura da função:
    // int fatorial(int);
    int n = 1;
    printf("Digite o numero para calcular o fatorial: ");
    scanf("%d", &n);
    int valorFatorial = 0;
    valorFatorial = fatorial(n);
    printf("%d", valorFatorial);
    getchar();
    getchar();
}