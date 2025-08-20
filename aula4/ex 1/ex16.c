#include <stdio.h>

int main() {
    float reais, dolares;
    printf("reais: "); 
    scanf("%f", &reais);
    
    dolares = reais/5.49;
    printf("dolares: %f\n", dolares);
    scanf("%f", &dolares);
    return 0;
}