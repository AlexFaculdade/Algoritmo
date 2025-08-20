#include <stdio.h>

int main() {
    int ano, mes, dia;
    int diasNascimento;

    printf("Digite o ano de nascimento: "); 
    scanf("%d", &ano);
    printf("Digite o mês de nascimento: "); 
    scanf("%d", &mes);
    printf("Digite o dia de nascimento: "); 
    scanf("%d", &dia);


    int anosVividos = 2025 - ano;

    if (mes > 8 || (mes == 8 && dia > 20)) {
        anosVividos--;
    }

    diasNascimento = anosVividos * 365;

    diasNascimento += (mes - 1) * 30;

    diasNascimento += dia;

    printf("Você viveu %d dias.\n", diasNascimento);
    scanf("%d", diasNascimento);
    return 0;
}
