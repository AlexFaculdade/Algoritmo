#include <stdio.h>

int main() {
    int nota;
    printf("Nota: ");
    scanf("%d", &nota);

    if(nota < 0 || nota > 10) {
        printf("Nota invalida");
    } else {
        printf("Nota valida");
    }

    scanf("%d", &nota);
}