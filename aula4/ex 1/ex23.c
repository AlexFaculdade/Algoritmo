#include <stdio.h>

int main() {
    float num, quad, cub;
    printf("num: "); 
    scanf("%f", &num);
    
    quad = num*num;
    cub = num*num*num;
    printf("quad: %f, cub: %f\n", quad, cub);
    scanf("%f", &quad);
    return 0;
}