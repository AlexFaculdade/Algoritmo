#include <stdio.h>

int main (){
    // Questão 3. (0,5 pontos) Uma instituição concede bolsas de estudo de acordo com a renda per capita, o CRA 
    // (Coeficiente de Rendimento Acadêmico), a carga horária de extensão realizada no último ano e a situação de 
    // vulnerabilidade do estudante. Considere que o salário-mínimo (SM) é R$ 1412,00 e aplique as seguintes regras:
    // 1) Se a renda per capita for menor ou igual a 1,5 SM:
    // • Se o aluno estiver em vulnerabilidade (S) → 100% de bolsa
    // • Caso contrário:
    // o CRA ≥ 8.0 e horas de extensão ≥ 60 → 80% de bolsa
    // o CRA ≥ 7.0 → 60% de bolsa
    // o Senão → 40% de bolsa
    // 2) Se a renda per capita for maior que 1,5 SM e menor ou igual a 3,0 SM:
    // • CRA ≥ 8.5 e horas de extensão ≥ 80 → 50% de bolsa
    // • CRA ≥ 7.5 → 30% de bolsa
    // • Senão → 10% de bolsa
    // 3) Se a renda per capita for maior que 3,0 SM → 0% de bolsa.
    // O programa deve ler os dados do estudante e exibir o percentual de bolsa concedido.
    // Exemplo de Entrada:
    // Renda per capita: 1600
    // CRA: 8.2
    // Horas de extensão: 40
    // Vulnerabilidade (S/N): N
    // Exemplo de Saída:
    // Bolsa concedida: 30%

    float rendaPerCapita, cra;
    int percentualBolsa=0, horasExtensao;
    const float SALARIOMINIMO = 1412.00;
    char vulnerabilidade;
    char porcento = '%';


    printf("Renda Per Capita: ");
    scanf("%f", &rendaPerCapita);
    
    printf("CRA: ");
    scanf("%f", &cra);

    printf("Horas de Extensao: ");
    scanf("%d", &horasExtensao);

    printf("Vulnerabilidade (S-N): ");
    getchar();
    scanf("%c", &vulnerabilidade);

    if (rendaPerCapita <= SALARIOMINIMO * 1.5) {
        if (vulnerabilidade == 'S' || vulnerabilidade == 's' ) {
            percentualBolsa = 100;
        } else if (cra >= 8 && horasExtensao >= 60) {
            percentualBolsa = 80;
        } else if (cra >= 7.0) {
            percentualBolsa = 60;
        } else {
            percentualBolsa = 40;
        }
    } else if (rendaPerCapita > SALARIOMINIMO * 1.5 && rendaPerCapita <= SALARIOMINIMO * 3) {
        if (cra >= 8.5 && horasExtensao >= 80) {
            percentualBolsa = 50;
        } else if (cra >= 7.5) {
            percentualBolsa = 30;
        } else {
            percentualBolsa = 10;
        }
    }
    
    printf("Bolsa concedida: %d%c", percentualBolsa, porcento);
    getchar();
    getchar();


    return 0;
}
