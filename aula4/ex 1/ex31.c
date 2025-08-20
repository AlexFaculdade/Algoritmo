#include <stdio.h>

int main() {
    float num, num2, media;
    printf("num: "); 
    scanf("%f", &num);
    printf("num2: "); 
    scanf("%f", &num2);
    
    media = (num+num2)/2;
    printf("media: %f\n", media);
    scanf("%f", &media);
    return 0;
}