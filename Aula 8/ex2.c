#include <stdio.h>

int main() {
    int n = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int soma = 0;
    for(int i = 0; i <= n; i++) {
        soma+= i;
    }
    printf("Valor total: %d", soma);
    getchar();
    getchar();

    return 0;
}