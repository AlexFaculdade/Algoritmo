#include <stdio.h>

int main() {
    //Desenvolva um programa que leia dois números inteiros e uma opção de
    //  operação (1=adição, 2=subtração, 3=multiplicação, 4=divisão). Utilize switch para
    // realizar o cálculo correspondente e exibir o resultado. 

    int num, num2;
    float result;
    char operator;
    printf("Digite o operador (+ - * /): ");
    scanf(" %c", &operator);
    
    printf("Digite o num: ");
    scanf("%d", &num);

    printf("Digite o num2: ");
    scanf("%d", &num2);
    
    switch (operator) {
        case '+':
            result = (float)num + num2;
            break;
        case '-':
            result = (float)num - num2;
            break;
        case '*':
            result = (float)num * num;
            break;
        case '/':
            result = (float)num/num2;
    }

    printf("O resultado é: %.2f", result);
    getchar();
    getchar();
    return 0;
}