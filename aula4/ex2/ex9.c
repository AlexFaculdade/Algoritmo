#include <stdio.h>

int main() {
    int idade;
    printf("idade: "); 
    scanf("%d", &idade);

    if(idade <=25) {
        printf("Jovem"); 
    } else {
        printf("Adulto");
    }
    scanf("%d", &idade);
    return 0;
}