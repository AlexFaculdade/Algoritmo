#include <stdio.h>

int main() {
    int num;
    printf("num: "); 
    scanf("%f", &num);
    
    if(num%2==0) {
        printf("par");
    } else {
        printf("Não é par");
    }
    scanf("%f", &num);
    return 0;
}