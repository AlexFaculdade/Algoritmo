#include <stdio.h>

int main() {
    float salarioBase, salarioFinal, aumento;
    printf("salarioBase: ");
    scanf("%f", &salarioBase);
    printf("Aumento em decimal: ");
    scanf("%f", &aumento);
    salarioFinal = salarioBase + (salarioBase*aumento);
    printf("salarioFinal: %f", salarioFinal);
    scanf("%f", &salarioFinal);
    return 0;
}