#include <stdio.h>

int main() {
    float nota;
    printf("nota: "); 
    scanf("%f", &nota);
    
    if(nota >= 6) {
        printf("Aprovado"); 
    } else {
        printf("Reprovado"); 
    }
    scanf("%f", &nota);
    return 0;
}