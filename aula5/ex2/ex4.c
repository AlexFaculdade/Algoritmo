#include <stdio.h>

int main() {
    // Faça um programa que leia o tipo de plano de estacionamento (1=Diária,
    //     2=Semanal, 3=Mensal, 4=Noturno) e calcule o valor a pagar:
    //     • Diária: R$ 8 por dia
    //     • Semanal: R$ 45 fixo
    //     • Mensal: R$ 180 fixo
    //     • Noturno: R$ 5 por dia


    int item, dias;
    float total;
    printf("Qual item você gostaria? \n(1) Diário \n(2) Semanal\n(3) Mensal\n(4) Noturno\n");
    scanf("%d", &item);
    switch(item) {
        case 1:
            printf("Quantos dias voce ficara: ");
            scanf("%d", &dias);
            total = (float) dias * 8;
            break;
        case 2:
            total = 45;
            break;
        case 3:
            total = 180;
            break;
        case 4:
            printf("Quantos dias voce ficara: ");
            scanf("%d", &dias);
            total = dias * 5;
            break;
    }

    printf("Voce pagara um total de: %f", total);
    getchar();
    getchar();


    return 0;
}