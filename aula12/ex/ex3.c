#include <stdio.h>
#include <math.h>

int main() {
    //Ler um conjunto de nu´ meros reais, armazenando-o em vetor e calcular o quadrado das
    // componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos teˆ m
    // 10 elementos cada. Imprimir todos os conjunto

    float reais[10];
    float reaisQuadraticos[10];
    int reaisLen = sizeof(reais) / sizeof(reais[0]);
    for(int i = 0; i < reaisLen; i++) {
        float valor = 0;
        printf("Digite o valor real do index %d: ", i);
        scanf("%f", &valor);
        reais[i] = valor;
        reaisQuadraticos[i] = pow(valor, 2);
    }
    
    for(int i = 0; i < reaisLen; i++) {
        printf("Valor da linha %d: %.2f | ", i, reais[i]);
        printf("Correspondente quadrático: %.2f\n", reaisQuadraticos[i]);
    }

    getchar();
    getchar();
    return 0;
}