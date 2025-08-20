#include <stdio.h>

int main() {
    float num, ant, suc;
    printf("num: "); 
    scanf("%f", &num);
    
    ant = num-1;
    suc = num+1;
    printf("ant: %f, suc: %f\n", ant, suc);
    scanf("%f", &suc);
    return 0;
}