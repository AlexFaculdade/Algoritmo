#include <stdio.h>

int main() {
    float precoProduto, desconto, valorFinal;
    printf("precoProduto: ");
    scanf("%f", &precoProduto);
    printf("desconto em decimaç: ");
    scanf("%f", &desconto);
    
    valorFinal = precoProduto+(precoProduto*desconto);
    printf("Valor final: %f\n", valorFinal);
    scanf("%f", &valorFinal);
    return 0;
}