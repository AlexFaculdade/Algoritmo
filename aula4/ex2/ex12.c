#include <stdio.h>

int main() {
    float temp;

    printf("temp: ");
    scanf("%f", &temp);

    if(temp < 0){
        printf("Congelante");
    } else if(temp >0) {
        printf("Acima de zero");
    } else {
        printf("Exatamente 0");
    }
    scanf("%f", &temp);
    return 0;
}