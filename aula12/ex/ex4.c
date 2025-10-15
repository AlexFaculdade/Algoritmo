#include <stdio.h>

int main() {
    //Fac¸ a um programa que leia um vetor de 8 posic¸ o˜ es e, em seguida, leia tambe´ m dois valores 
    // X e Y quaisquer correspondentes a duas posic¸ o˜ es no vetor. Ao final seu programa
    // devera´ escrever a soma dos valores encontrados nas respectivas posic¸ o˜ es X e Y 
    int vetor [8];
    int vetorLen = sizeof(vetor) / sizeof(vetor[0]);
    for(int i = 0; i < vetorLen; i++) {
        printf("Digite o valor do index %d: ", i);
        scanf("%d", &vetor[i]);
    }
    int x = 0, y = 0;
    printf("num x: ");
    scanf("%d", &x);
    
    printf("num y: ");
    scanf("%d", &y);

    int sum = vetor[x] + vetor[y];
    printf("A soma dos valores na posição x e y é: %d", sum);
    getchar();
    getchar();
    return 0;
}
