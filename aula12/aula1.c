#include <stdio.h>
#include <string.h>

int main() {
    //Vetor é uma coleção de variáveis do mesmo tipo que é referenciado por um nome em comum
    int linhasVector = 0;
    int colunasVector = 0;
    printf("Digite a quantidade de linhas do vetor: ");
    scanf("%d", &linhasVector);
    printf("Digite a quantidade de colunas do vetor: ");
    scanf("%d", &colunasVector);
    int matriz[linhasVector][colunasVector];
    int linhas = sizeof(matriz) / sizeof(matriz[0]);
    int colunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++){
            int valor = 0;
            printf("Digite o valor da linha %d, coluna %d: ", i,j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    getchar();
    getchar();

    return 0;
}