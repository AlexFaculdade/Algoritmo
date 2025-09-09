#include <stdio.h>

int main() {
    int votosNulos = 0, votosValidos = 0, votosBrancos = 0, votosTotal = 0;
    float percentualVotosNulos, percentualVotosValidos, percenutalVotosBrancos;
    printf("Quantidade de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Quantidade de votos validos: ");
    scanf("%d", &votosValidos);

    printf("Quantidade de votos brancos: ");
    scanf("%d", &votosBrancos);

    votosTotal = votosNulos + votosValidos + votosBrancos;
    
    percentualVotosNulos = ((float) votosNulos/votosTotal)*100;
    percentualVotosValidos = ((float) votosValidos/votosTotal)*100;
    percenutalVotosBrancos = ((float) votosBrancos/votosTotal)*100;
    printf("Percentual votos nulos: %.2f porcento\n", percentualVotosNulos);
    printf("Percentual votos nulos: %.2f porcento\n", percentualVotosValidos);
    printf("Percentual votos nulos: %.2f porcento", percenutalVotosBrancos);
    getchar();
    getchar();
    return 0;
}