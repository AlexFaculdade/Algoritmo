#include <stdio.h>

int main() {
    float idade, meses, dia;
    printf("idade: "); 
    scanf("%f", &idade);
    
    meses = idade*12;
    dia = meses*30;
    printf("meses: %f, dias: %f\n", meses, dia);
    scanf("%f", &dia);
    return 0;
}