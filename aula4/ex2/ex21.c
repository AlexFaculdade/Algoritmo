#include <stdio.h>

int main() {
    float num, num2, num3;
    printf("num: ");
    scanf("%f", &num);
    printf("num2: ");
    scanf("%f", &num2);
    printf("num3: ");
    scanf("%f", &num3);

    if(num == num2 && num == num3) {
        printf("Ha igualdade");
    } else if(num > num2 && num > num3) {
        printf("O maior num é:  %f", num);
    } else if(num2 > num && num2 > num3) {
        printf("O maior num é:  %f", num2);
    } else if(num3 > num && num3 > num2) {
        printf("O maior num é:  %f", num3);
    }

    scanf("%f", &num);
    return 0; 
}