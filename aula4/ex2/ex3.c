#include <stdio.h>

int main() {
    float valor;
    printf("valor: "); 
    scanf("%f", &valor);
    
    if(valor >= 100) {
        valor = valor - (valor*0.05);
    }
    printf("O valor do produto e %f", valor);
    scanf("%f", &valor);
    return 0;
}