#include <stdio.h>

int main() {
    float valor, valorTotal;
    scanf("%f", &valor);
    if(valor >= 200) {
        printf("Frete gratis, valor total: %f", valor);
    } else {
        valorTotal = valor+20;
        printf("Sem frete gratis, frete: 20 reais, valor do produto: %f, valor total: %f", valor, valorTotal);
    }

    scanf("%f", &valor);
    return 0; 
}