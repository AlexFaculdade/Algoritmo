#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    //     Uma empresa irá oferecer um reajuste salarial, cujo percentual será decidido através das
    // situações abaixo:
    // • Funcionários do sexo masculino com tempo de casa superior ou igual a 10 anos terão direito a um
    // reajuste de 5%;
    // • Funcionários do sexo masculino com tempo de casa inferior a 10 anos terão direito a um reajuste
    // de 3%;
    // • Funcionários do sexo feminino com tempo de casa superior ou igual a 8 anos terão direito a um
    // reajuste de 5%;
    // • Funcionários do sexo feminino com tempo de casa inferior a 8 anos terão direito a um reajuste de
    // 3%;
    // • Funcionários em qualquer uma das situações acima, porém com mais de um dependente terá
    // ainda um reajuste de 2% sobre o salário reajustado anteriormente.
    // Com base no fluxograma elaborado na APS, elabore o programa que solicite os dados de um funcionário
    // e calcule qual será seu salário reajustado
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char sex;
    int tempoCasa = 0;
    float reajuste = 0, salario = 0;
    int respostaParaDependente = 2;
    bool possuiMaisDeUmDependente = false;

    printf("Qual seu sexo?(f, m):");
    scanf("%c", &sex);

    printf("Quantos anos você trabalha nessa empresa? ");
    scanf("%d", &tempoCasa);

    printf("Qual seu salário atual? ");
    scanf("%f", &salario);

    printf("Você possui mais de um dependente? \n (1) Sim \n (2) Não ");
    scanf("%d", &respostaParaDependente);
    switch(respostaParaDependente) {
        case 1: 
            possuiMaisDeUmDependente = true;
            break;
        case 2: 
            possuiMaisDeUmDependente = false;
            break;
        default:
            possuiMaisDeUmDependente = false;
    }

    if(sex == 'm' && tempoCasa >= 10) {
        reajuste = 0.05;
    } else if(sex == 'm' && tempoCasa <10) {
        reajuste = 0.03;
    } else if(sex == 'f' && tempoCasa >= 8) {
        reajuste = 0.05;
    } else if(sex == 'f' && tempoCasa < 8) {
        reajuste = 0.03;
    }

    salario = salario + (reajuste * salario);
    if(reajuste > 0 && possuiMaisDeUmDependente) {
        salario = salario + (salario*0.02);
    }

    printf("Seu salário com os reajustes ficou: %.2f reais", salario);
    getchar();
    getchar();


    

    return 0;
}