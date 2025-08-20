#include <stdio.h>

int main() {
    float produto, imposto, valorFinal;
    printf("produto: "); 
    scanf("%f", &produto);
    printf("imposto em percentual: "); 
    scanf("%f", &imposto);

    imposto = (imposto/100);

    valorFinal = produto + (produto*imposto);
    printf("volume: %f\n", valorFinal);
    scanf("%f", &valorFinal);
    return 0;
}