#include <stdio.h>

int main() {
    float deposito, rendimento, valorTotal;
    printf("deposito: ");
    scanf("%f", &deposito);
    printf("rendimento: ");
    scanf("%f", &rendimento);
    
    valorTotal = deposito+(deposito*deposito);
    printf("Valor final: %f\n", valorTotal);
    scanf("%f", &valorFinal);
    return 0;
}