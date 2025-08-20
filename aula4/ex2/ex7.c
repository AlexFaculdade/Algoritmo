#include <stdio.h>

int main() {
    float num, num2;
    printf("num: "); 
    scanf("%f", &num);
    printf("num2: "); 
    scanf("%f", &num2);

    if(num > num2) {
        printf("%f", num); 
    } else if(num2==num) {
        printf("Iguais"); 
    } else {
        printf("%f", num2);
    }
    scanf("%f", &num);
    return 0;
}