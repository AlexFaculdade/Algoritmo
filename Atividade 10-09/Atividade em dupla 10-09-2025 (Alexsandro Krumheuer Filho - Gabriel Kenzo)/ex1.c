#include <stdio.h>

int main() {
    // Questão 1. (0,5 pontos) Durante a construção de uma casa, o pintor precisa calcular a quantidade de tinta necessária 
    // para pintar uma parede retangular da sala. Sabe-se que cada litro de tinta cobre 3 m² de parede. Escreva um 
    // programa que: leia a altura e a largura da parede (em metros); calcule a área total da parede; determine quantos 
    // litros de tinta serão necessários para pintá-la.
    // Exemplo de Entrada:
    // Altura da parede (m): 2.5
    // Largura da parede (m): 4
    // Exemplo de Saída:
    // Área da parede: 10.00 m²
    // Quantidade de tinta necessária: 3.33 litros

    float larguraParede, alturaParede, areaParede, litrosTinta;

    printf("Digite a largura da parede (m): ");
    scanf("%f", &larguraParede);

    printf("Digite a altura da parede (m): ");
    scanf("%f", &alturaParede);

    areaParede = larguraParede * alturaParede;
    
    litrosTinta = areaParede/3;

    printf("Area da parede: %.2f m2\n", areaParede);
    printf("Quantidade de tinta necessaria: %.2f litros", litrosTinta);
    getchar();
    getchar();

    return 0;
}