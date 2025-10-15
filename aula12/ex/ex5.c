#include <stdio.h>

int main() {
    //Leia um vetor de 10 posic¸ o˜ es. Contar e escrever quantos valores pares ele possui.
    int vetor[10];
    int vetorPar[10];
    int lenVetor = sizeof(vetor) / sizeof(vetor[0]);

    for(int i = 0; i < lenVetor; i++) {
        printf("Digite o valor do index %d: ", i);
        scanf("%d", vetor[i]);
    }
    
    for(int i = 0; i < lenVetor; i++) {
        
    }

    int vetorParSize = sizeof(vetorPar) / sizeof(vetorPar[0]);

    return 0;
}