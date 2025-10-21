#include <stdio.h>

int main() {
    // Uma loja virtual deseja implementar uma funcionalidade que percorra os
    // preços de 20 produtos e calcule:
    // • A média dos produtos com preço acima de R$ 500,00.
    // • A quantidade de produtos com preço abaixo de R$ 100,00.
    // Implemente um programa em C que:
    // • Leia o preço de 20 produtos.
    // • Calcule a média dos preços acima de R$ 500,00.
    // • Conte quantos produtos custam menos de R$ 100,00.
    // • Mostre os resultados ao final da execução.
    float produtos[20] = {
        12.50, 87.99, 150.00, 235.75, 310.10,
        405.60, 498.25, 520.80, 603.99, 699.30,
        712.45, 789.00, 820.55, 876.90, 910.10,
        935.25, 960.75, 980.99, 995.49, 1000.00
    };

    float mediaMaiorQuinhetos = 0;
    int quantidadeValores = 0;

    int produtosLen = sizeof(produtos) / sizeof(produtos[0]);
    for(int i = 0; i < produtosLen; i++) {
        if(produtos[i] > 500) {
            mediaMaiorQuinhetos+= produtos[i];
            quantidadeValores++;
        }
    }

    return 0;
}