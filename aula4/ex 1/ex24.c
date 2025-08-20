#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;
    printf("baseMaior: "); 
    scanf("%f", &baseMaior);
    printf("baseMenor: "); 
    scanf("%f", &baseMenor);
    printf("altura: "); 
    scanf("%f", &altura);
    
    area = (baseMaior+baseMenor)*altura;
    printf("area: %f\n", area);
    scanf("%f", &area);
    return 0;
}