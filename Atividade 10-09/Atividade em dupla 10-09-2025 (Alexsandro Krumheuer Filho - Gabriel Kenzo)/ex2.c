#include <stdio.h>

int main() {
    // Questão 2. (0,5 pontos) No comércio, a formação do preço final de um produto não depende apenas do valor 
    // definido pelo fornecedor, mas também da aplicação de impostos específicos de acordo com a categoria do item e a 
    // sua origem (nacional ou importado). Essa regra é muito comum em supermercados, lojas de eletrônicos e até no 
    // setor de moda, onde os tributos variam conforme a natureza do produto e o custo de importação. Pensando nisso, 
    // elabore um programa que simule o cálculo do preço final de um produto a partir das seguintes informações 
    // fornecidas pelo usuário:
    // • Preço base (valor inicial do produto antes dos impostos);
    // • Categoria (1 = Alimento, 2 = Higiene, 3 = Eletrônico, 4 = Vestuário);
    // • Origem (N = nacional, I = importado).
    // O programa deve aplicar a alíquota base correspondente à categoria do produto e, dentro de cada caso, verificar se 
    // o item é importado, adicionando um percentual extra ao imposto. Por fim, o sistema deverá exibir o valor do imposto 
    // calculado e o preço final do produto (preço base + imposto)
    // Regras de tributação:
    // Alíquota base por categoria:
    // • Alimento → 4%
    // • Higiene → 7%
    // • Eletrônico → 15%
    // • Vestuário → 10%
    // Adicional por origem:
    // • Nacional → 0%
    // • Importado → +5% sobre o preço base
    // Exemplo de Entrada:
    // Preço base: 1200
    // Categoria (1-4): 3
    // Origem (N/I): I
    // Exemplo de Saída:
    // Imposto: 240.00
    // Preço final: 1440.00

    float precoBase, precoFinal, tributacao;
    int categoria;
    char origem;

    printf("Preco base: ");
    scanf("%f", &precoBase);

    printf("Categoria (1-4): ");
    scanf("%d", &categoria);

    printf("Origem (N-I): ");
    getchar();
    scanf("%c", &origem);

    switch(categoria) {
        case 1:
            tributacao = precoBase * 0.04;
            break;
        case 2:
            tributacao = precoBase * 0.07;
            break;
        case 3:
            tributacao = precoBase * 0.15;
            break;
        case 4:
            tributacao = precoBase * 0.1;
            break;
    }

    if(origem == 'I' || origem == 'i') {
        tributacao += precoBase * 0.05;
    }

    precoFinal = precoBase + tributacao;

    printf("Imposto: %.2f reais\n", tributacao);
    printf("Preco final: %.2f reais", precoFinal);
    
    getchar();
    getchar();

    return 0;
}