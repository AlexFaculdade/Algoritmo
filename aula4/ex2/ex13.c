#include <stdio.h>

int main() {
    float nota, nota2, media;

    printf("nota: ");
    scanf("%f", &nota);
    printf("nota2: ");
    scanf("%f", &nota2);

    media = (nota+nota2)/2;

    if(media >= 6) {
        printf("Aprovado");
    } else {
        printf("Prova final");
    }
    scanf("%f", &media);
    return 0;
}