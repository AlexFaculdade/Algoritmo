#include <stdio.h>

int main() {
    float salario, aumento, salarioFinal;
    printf("salario: "); 
    scanf("%f", &salario);
    printf("aumento em percentual: "); 
    scanf("%f", &aumento);

    aumento = aumento/100;
    
    salarioFinal = salario + (salario*aumento);

    printf("salarioFinal: %f\n", salarioFinal);
    scanf("%f", &salarioFinal);
    return 0;
}