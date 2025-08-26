#include <stdio.h>
#include <stdbool.h>

int main() {
    float lado, lado2, lado3;
    bool isTriangle = false;
    printf("lado: ");
    scanf("%f", &lado);
    printf("lado: ");
    scanf("%f", &lado2);
    printf("lado: ");
    scanf("%f", &lado3);
    if(lado+lado2 > lado3 && lado2 + lado3 > lado && lado3+lado > lado2) {
        isTriangle = true;
    } else {
        printf("Não é um triângulo");
    }

    if(lado == lado2 && lado == lado3 && isTriangle) {
        printf("Triangulo equilatero");
    } else if(lado == lado2 || lado == lado3 || lado2 == lado3 && isTriangle) {
        printf("Triangulo isosceles");
    } else {
        if(isTriangle) {
            printf("Triangulo escaleno");
        }
    }

    scanf("%f", &lado);

    return 0; 
}