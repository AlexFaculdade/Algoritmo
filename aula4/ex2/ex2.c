#include <stdio.h>

int main() {
    int idade;
    printf("idade: "); 
    scanf("%d", &idade);
    
    if(idade>=18) {
        printf("adulto");
    } else {
        printf("não adulto");
    }
    scanf("%f", &idade);
    return 0;
}