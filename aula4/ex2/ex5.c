#include <stdio.h>

int main() {
    int nota;
    float frequencia;
  
    printf("Frequencia em percentual: "); 
    scanf("%f", &frequencia);
    printf("nota: "); 
    scanf("%f", &nota);
    frequencia = frequencia/100;
    if(nota >= 6 && frequencia >= 0.75) {
        printf("Aprovado"); 
    } else if(nota >= 4 && frequencia >= 0.75) {
        printf("Recuperacao"); 
    } else {
        printf("Reprovado"); 
    }

    scanf("%f", &nota);

    return 0;
}