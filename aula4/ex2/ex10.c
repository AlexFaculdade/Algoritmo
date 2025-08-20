#include <stdio.h>

int main() {

    // Até 100 kWh → R$ 0,50/kWh
    // Até 200 kWh → R$ 0,70/kWh
    // Acima de 200 kWh → R$ 0,90/kWh
    // Calcule o valor total.
    float energiaGasta, valorTotal;
    printf("Quantidade de energia gasta em KWh: "); 
    scanf("%f", &energiaGasta);

    if(energiaGasta <= 100) {
        valorTotal = energiaGasta *0.5;
    } else if(energiaGasta > 100 && energiaGasta <= 200) {
        valorTotal = energiaGasta * 0.7;
    } else {
        valorTotal = energiaGasta * 0.9;
    }

    printf("O total gasto de energia foi: %f", valorTotal);
    scanf("%d", &valorTotal);
    return 0;
}