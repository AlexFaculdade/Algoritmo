#include <stdio.h>

int main() {
    float horas, valorPago, horasExcedentes, total, valorExtra,valorNormal;
    printf("Horas trabalhadas: "); 
    scanf("%f", &horas);
    printf("Valor pago por hora: "); 
    scanf("%f", &valorPago);

    if(horas > 40) {
        horasExcedentes = horas-40;
        horas = 40; 
    } 
    valorExtra = horasExcedentes * (valorPago + (valorPago*0.5));
    valorNormal = horas*valorPago;
    total = valorNormal + valorExtra;

    if(horasExcedentes > 0) {
        printf("Voce recebera %f reais pelas horas extras e %f reais pelas horas normais, no total %f reais", valorExtra, valorNormal, total); 
    } else {
        printf("Voce recebera: %f reais no total", total);
    }
    scanf("%f", &horasExcedentes);
    return 0;
}