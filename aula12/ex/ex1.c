#include <stdio.h>

int main() {
    // Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 
    // O programa deve executar os seguintes passos:
    // (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    // (b) Armazene em uma varia´ vel inteira (simples) a soma entre os valores das posic¸ o˜ es
    // A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    // (c) Modifique o vetor na posic¸ a˜ o 4, atribuindo a esta posic¸ a˜ o o valor 100.
    // (d) Mostre na tela cada valor do vetor A, um em cada linha
    int vetor [6] = {1, 0, 5, -2, -5, 7};
    int somaSimples = vetor[0] + vetor[1] + vetor[5];
    printf("Soma simples do vetor: %d\n", somaSimples);
    vetor[4] = 100;
    int lenVetor = sizeof(vetor) / sizeof(vetor[0]);
    for(int i = 0; i < lenVetor; i++) {
        printf("Linha %d: %d\n", i, vetor[i]);
    }

    getchar();


    return 0;
}