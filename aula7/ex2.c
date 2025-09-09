#include <stdio.h>

int main() {
    int valorMes = 0;
    printf("Escreva o mês de referência: ");
    printf("\n (1) - Janeiro");
    printf("\n (2) - Fevereiro");
    printf("\n (3) - Março");
    printf("\n (4) - Abril");
    printf("\n (5) - Maio");
    printf("\n (6) - Junho");
    printf("\n (7) - Julho");
    printf("\n (8) - Agosto");
    printf("\n (9) - Setembro");
    printf("\n (10) - Outubro");
    printf("\n (11) - Novembro");
    printf("\n (12) - Dezembro\n");
    scanf("%d", &valorMes);
    switch(valorMes) {
        case 1: 
            printf("Corresponde a Janeiro");
            break;
        case 2: 
            printf("Corresponde a Fevereiro");
            break;
        case 3: 
            printf("Corresponde a Março");
            break; 
        case 4: 
            printf("Corresponde a Abril");
            break;
        case 5: 
            printf("Corresponde a Maio");
            break;
        case 6: 
            printf("Corresponde a Junho");
            break;
        case 7: 
            printf("Corresponde a Julho");
            break;
        case 8: 
            printf("Corresponde a Agosto");
            break;
        case 9: 
            printf("Corresponde a Setembro");
            break;
        case 10: 
            printf("Corresponde a Outubro");
            break;
        case 11: 
            printf("Corresponde a Novembro");
            break;
        case 12: 
            printf("Corresponde a Dezembro");
            break;
        default:
            printf("Valor inválido");
    }

    getchar();
    getchar();
    return 0;   
}