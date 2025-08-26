#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade < 65) {
        printf("Apto para CNH");
    } else if(idade < 18) {
        printf("Idade insuficiente para CNH");
    } else if(idade >= 65) {
        printf("Exame especial necessario");
    }

    scanf("%d", &idade);
}