#include <stdio.h>

int main() {
    float num, num2, result;
    char operator;
    printf("Num: ");
    scanf("%f", &num);
    printf("Num2: ");
    scanf("%f", &num2);
    printf("Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if(num2 == 0 && num > 0 && operator == '/') {
        printf("Divisão por 0");
        getchar();
        getchar();
        return 0;
    }

    if(operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Operador invalido");
    } else {
        switch(operator) {
            case '+':
                result = num + num2;
                break;
            case '-':
                result = num - num2;
                break;
            case '*':
                result = num * num2;
                break;
            case '/':
                result = num / num2;
                break;
        }
        printf("O resultado é: %f", result);
        getchar();
        getchar();
    }

    return 0;
}