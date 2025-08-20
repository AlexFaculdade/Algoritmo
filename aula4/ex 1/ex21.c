#include <stdio.h>

int main() {
    float horas, minutos, segundos, segundosTotal;
    printf("horas: "); 
    scanf("%f", &horas);
    printf("minutos: "); 
    scanf("%f", &minutos);
    printf("segundos: "); 
    scanf("%f", &segundos);
    
    segundosTotal = (horas*3600) + (minutos*60) + segundos;
    printf("segundosTotal: %f\n", segundosTotal);
    scanf("%f", &segundosTotal);
    return 0;
}