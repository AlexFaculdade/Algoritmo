#include <stdio.h>

int main() {
    float num, num2, media;
    printf("num: "); 
    scanf("%f", &num);
    printf("num2: "); 
    scanf("%f", &num2);
    
    media = 2/(1/num + 1/num2);
    printf("media: %f\n", media);
    scanf("%f", &media);
    return 0;
}