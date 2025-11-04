#include <stdio.h>

void mostrarVelocidadeMedia(int velocidadeMedia) {
    printf("Velocidade media: %d km/h\n", velocidadeMedia);
}   

int calcularVelocidadeMedia(int distancia, int tempo) {
    return distancia/tempo;
}

int tempoNecessarioCompletarProva() {
    int tempo;
    printf("Digite o tempo necessário para concluir a prova em horas: ");
    scanf("%d", &tempo);
    return tempo;
}

int distanciaNecessariaConcluirProva() {
    int distancia;
    printf("Digite a distância necessaria para concluir a prova em km: ");
    scanf("%d", &distancia);
    return distancia;
}

void needForSpeed() {
    int distancia = distanciaNecessariaConcluirProva();
    int tempo = tempoNecessarioCompletarProva();
    int velocidadeMedia = calcularVelocidadeMedia(distancia, tempo);
    mostrarVelocidadeMedia(velocidadeMedia);
}

int main() {
    // Ao final de uma partida de Need for Speed® é apresentado ao jogador a sua velocidade média. Crie um programa
    // modularizado para:
    // Funcionalidade Assinatura da função
    // principal void needForSpeed();
    // ler a distância percorrida por um veículo float lerDistancia();
    // ler o tempo necessário para completar a prova float lerTempo();
    // calcular a velocidade média float calcularVelocidade(float, float);
    // apresentar a velocidade média void mostrarVelocidade(float);

    needForSpeed();
    getchar();
    getchar();

    return 0;
}