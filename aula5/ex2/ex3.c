#include <stdio.h>

int main() {
    // Faça um programa que leia uma opção de ação (1=Devolver, 2=Renovar,
    //     3=Consultar multa, 4=Perda de exemplar) e os dias de atraso do livro.
    //     • Se devolver, calcule a multa (R$1,50 por dia de atraso).
    //     • Se renovar, acrescente 7 dias ao prazo.
    //     • Se consultar multa, apenas mostre o valor.
    //     • Se perda, cobre taxa de R$80 mais a multa

    int item, dias;
    float total;
    printf("Qual item você gostaria? \n(1) Devolver \n(2) Renovar\n(3) Consultar multa\n(4) Perda de Exemplar\n");
    scanf("%d", &item);
    printf("Dias de atraso do livro: ");
    scanf("%d", &dias);
    total = (float) dias * 1.5;
    switch(item) {
        case 1:
            printf("Sua multa e de: %f", total);
            break;
        case 2:
            printf("Foi acrescentado 7 dias no seu prazo para renovação");
            break;
        case 3:
            printf("Você tem atualmente uma multa de: %f", total);
            break;
        case 4:
            total += 80;
            printf("Sua multa mais a taxa fica: %f", total);
            break;
    }

    
    getchar();
    getchar();
    return 0;
}