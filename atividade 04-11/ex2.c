#include <stdio.h>

void mensagemDesempenho(int percentualItensColetados) {
    if(percentualItensColetados >= 90) {
        printf("Outstanding\n");
    } else if(percentualItensColetados >= 60 && percentualItensColetados < 90) {
        printf("That was really good!!!\n");
    } else if(percentualItensColetados >= 40 && percentualItensColetados < 60) {
        printf("Ok. But try a little harder next time...\n");
    } else if(percentualItensColetados < 40) {
        printf("You must improve yourself!\n");
    } else {
        printf("Valor inválido\n");
    }
}

int main() {
    // Pathway to Intelligence é um jogo de aventura no mesmo estilo de Tomb Raider®. O jogo é composto de várias fases com
    // itens coletáveis. Crie uma função que receba por parâmetro o percentual de itens coletados. Conforme o percentual, uma
    // mensagem deve ser apresentada:
    // • Até 40% (inclusive) – “You must improve yourself!”
    // • Entre 40% (exclusive) e 60% (inclusive) – “Ok. But try a little harder next time...”
    // • Entre 60% (exclusive) e 90% (inclusive) – “That was really good!”
    // • Entre 90% (exclusive) e 100% (inclusive) – “Outstanding!!!”
    // Assinatura da função:
    // void mensagemDesempenho(float);
    
    int percentualItemColetado;
    printf("Digite o percentual de itens que voce coletou (0-100): ");
    scanf("%d", &percentualItemColetado);
    mensagemDesempenho(percentualItemColetado);
    getchar();
    getchar();

    return 0;
}