#include <stdio.h>

int main() {
    float produto, desconto, desconto2, valorFinal;
    printf("produto: "); 
    scanf("%f", &produto);
    printf("desconto em percentual: "); 
    scanf("%f", &desconto);
    printf("desconto2 em percentual: "); 
    scanf("%f", &desconto2);

    desconto = desconto/100;
    desconto2 = desconto2/100;
    
    produto = produto + (produto*desconto);
    valorFinal = produto + (produto*desconto2);
    printf("valorFinal: %f\n", valorFinal);
    scanf("%f", &valorFinal);
    return 0;
}