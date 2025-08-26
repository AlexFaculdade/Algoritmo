#include <stdio.h>

int main() {
    float altura, peso, imc;

    printf("Altura em m: ");
    scanf("%f", &altura);
    printf("Peso em Kg: ");
    scanf("%f", &peso);
    
    imc = peso / (altura*altura);   
    if(imc >= 30) {
        printf("Seu IMC: %f, voce esta obeso", imc);
    } else if(imc >= 25 && imc < 30) {
        printf("Seu IMC: %f, voce esta com sobrepeso", imc);
    } else if(imc >= 18.5 && imc < 25) {
        printf("Seu IMC: %f, voce esta com o peso normal", imc);
    } else if( imc < 18.5) {
        printf("Seu IMC: %f, voce esta abaixo do peso", imc);
    }

    scanf("%f", &imc);


    return 0;
}