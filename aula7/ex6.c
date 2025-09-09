#include <stdio.h>

int main() {
    // para sexo feminino: peso ideal = (62.1 * altura) - 44.7
    // - para sexo masculino: peso ideal = (72.7 * altura) - 58

    char sexo;
    float altura = 0, pesoIdeal = 0;
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%19s", &nome);

    printf("Digite seu sexo (m,f):");
    getchar();
    scanf("%c", &sexo);

    printf("Sua Altura: ");
    scanf("%f", &altura);
    
    switch(sexo) {
        case 'm':
            pesoIdeal = (72.7 * altura) - 58;
            break;
        case 'f':
            pesoIdeal = (62.1 * altura) - 44.7;
            break;
        default:
            printf("Tipo de input para sexo invalido");
    }

    if(pesoIdeal != 0) {
        printf("%s seu peso ideal é: %.2f", nome, pesoIdeal);
    }
    getchar();
    getchar();
    return 0;
}