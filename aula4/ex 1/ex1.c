#include <stdio.h>

int main() {
    float num1, num2, media;
    printf("Num1: ");
    scanf("%f", &num1);
    printf("Num2: ");
    scanf("%f", &num2);
    media = (num1+num2)/2;
    printf("Media: %f", media);
    return 0;
}