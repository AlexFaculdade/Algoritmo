#include <stdio.h>

int main() {
    float num, num2, soma, sub, mul, div;
    printf("num: ");
    scanf("%f", &num);
    printf("num2: ");
    scanf("%f", &num2);
    soma = num + num2;
    sub = num - num2;
    mul = num * num2;
    div = num / num2;
    printf("valorTotal: %f\n", soma);
    printf("valorTotal: %f\n", sub);
    printf("valorTotal: %f\n", mul);
    printf("valorTotal: %f\n", div);
    scanf("%f", &soma);
    return 0;
}