#include <stdio.h>

int main() {
    int anos = 0, meses = 0, dias = 0, segundos = 0;
    printf("Digite a quantidade de anos que voce viveu: ");
    scanf("%d", &anos);

    printf("Digite a quantidade de meses que voce viveu: ");
    scanf("%d", &meses);

    printf("Digite a quantidade de dias que voce viveu: ");
    scanf("%d", &dias);

    segundos = (anos * 365  * 24 * 3600) + (meses * 30 * 24 * 3600) + (dias * 24 * 3600);

    printf("Você viveu %d segundos", segundos);

    getchar();
    getchar();
    
    return 0;
}