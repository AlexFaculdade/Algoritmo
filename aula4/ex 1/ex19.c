#include <stdio.h>

int main() {
    float area, base, altura;
    printf("base: "); 
    scanf("%f", &base);
    printf("altura: "); 
    scanf("%f", &altura);
    
    area = base*altura;
    printf("area: %f\n", area);
    scanf("%f", &area);
    return 0;
}