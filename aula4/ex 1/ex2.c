#include <stdio.h>

int main() {
    float base, altura, area;
    printf("base: ");
    scanf("%f", &base);
    printf("altura: ");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("Area: %f", area);
    scanf("%f", &base);
    return 0;
}