#include <stdio.h>
#include <stdbool.h>

int main() {
    float precoProduto;
    bool desconto = true;
    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);

    if(precoProduto >= 500) {
        precoProduto = precoProduto - (precoProduto *0.1);
    } else if(precoProduto >= 200) {
        precoProduto = precoProduto - (precoProduto *0.07);
    } else {
        desconto = false;
    }

    if(desconto) {
        printf("O preco do produto com desconto fica: %f", precoProduto);   
    } else {
        printf("Para esse produto nao ha desconto, portanto, o preco e: ", precoProduto);
    }

    scanf("%f", & precoProduto);
}