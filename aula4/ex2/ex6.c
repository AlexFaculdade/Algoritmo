#include <stdio.h>

int main() {
    float num;
    printf("num: "); 
    scanf("%f", &num);

    if(num >0) {
        printf("Positivo"); 
    } else if(num==0) {
        printf("Neutro"); 
    } else {
        printf("Negativo");
    }
    scanf("%f", &num);
    return 0;
}