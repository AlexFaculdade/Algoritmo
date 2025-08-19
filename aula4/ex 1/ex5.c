#include <stdio.h>

int main() {
    float valorTotal, precoProduto, quantidade;
    printf("precoProduto: ");
    scanf("%f", &precoProduto);
    printf("Quantidade: ");
    scanf("%f", &quantidade);
    valorTotal = precoProduto * quantidade;
    printf("valorTotal: %f", valorTotal);
    scanf("%f", &valorTotal);
    return 0;
}