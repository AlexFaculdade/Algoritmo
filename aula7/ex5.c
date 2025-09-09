#include <stdio.h>

int main() {
    int listaNums [9];
    int numAtual = 0;

    for(int i =0; i < 9; i++) {
        printf("Digite o número de index %d: ", i);
        scanf("%d", &numAtual);
        listaNums[i] = numAtual;
    }
    int tamanhoListaNums = sizeof(listaNums) / sizeof(listaNums[0]);
    int maiorNumAtual = 0;
    for(int i = 0; i < tamanhoListaNums; i++) {
        if(listaNums[i] > maiorNumAtual) {
            maiorNumAtual = listaNums[i];
        }
    }

    printf("Maior num de todos que você digitou é: %d", maiorNumAtual);
    getchar();
    getchar();


    return 0;
}