#include <stdio.h>

int main() {
    float idade, dias;
    printf("idade: "); 
    scanf("%f", &idade);

    dias = idade*365;
    printf("dias: %f\n", dias);
    scanf("%f", &dias);
    return 0;
}