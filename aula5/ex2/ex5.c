#include <stdio.h>

int main() {
    // Crie um programa que leia a opção de cálculo (1=Escala Conceito, 2=Arredondar
    //     nota, 3=Média simples, 4=Média ponderada).
    //     • Escala conceito: converte nota (0–100) em A, B, C, D ou F.
    //     • Arredondar: mostra nota antes e depois do arredondamento (1 casa).
    //     • Média simples: média de 3 notas.
    //     • Média ponderada: média de 3 notas com pesos

    int item, dias;
    float total;
    printf("Qual item você gostaria? \n(1) Escala Conceito \n(2) Arrendondar\n(3) Media simples\n(4) Media ponderada\n");
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