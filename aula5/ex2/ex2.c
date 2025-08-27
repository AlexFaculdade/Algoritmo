#include <stdio.h>

int main() {
    // Faça um programa que leia o código de um item do cardápio (1 a 5) e a
    // quantidade desejada. Use switch para calcular o valor total a pagar conforme a
    // tabela:
    // • Pão de queijo – R$ 4,00
    // • Café – R$ 3,50
    //  Suco – R$ 6,00
    // • Sanduíche – R$ 12,00
    // • Salada de fruta – R$ 8,00

    int item, quantidade;
    float total;
    printf("Qual item você gostaria? \n(1) Pão de queijo: R$ 4,00 \n(2) Café: R$ 3,50\n(3) Suco: R$ 6,00\n(4) Sanduíche: R$ 12,00\n(5) Salada de fruta: R$ 8,00\n");
    scanf("%d", &item);
    printf("Qual a quantidade que você gostaria desse item?\n");
    scanf("%d", &quantidade);
    
    switch(item) {
        case 1:
            total = (float) quantidade * 4;
            break;
        case 2:
            total = (float) quantidade * 3.5;
            break;
        case 3:
            total = (float) quantidade * 6;
        case 4:
            total = (float) quantidade * 12;
            break;
        case 5:
            total = (float) quantidade * 8;
            break;
    }

    printf("O total ficou: %.2f", total);
    getchar();
    getchar();


    return 0;
}