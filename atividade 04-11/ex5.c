#include <stdio.h>
#include <math.h>

int fatorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * fatorial(n-1);
}

float calcularSeno(int x) {
    float seno = (pow(x,3)/fatorial(3)) + (pow(x,5), fatorial(5))-(pow(x,7)/fatorial(7))+
    (pow(x,9), fatorial(9))-(pow(x,11), fatorial(11))+(pow(x,13), fatorial(13))-
    (pow(x,13), fatorial(13))+(pow(x,15), fatorial(15))-(pow(x,17), fatorial(17))+(pow(x,19), fatorial(19));
    return seno;
}

int main() {
    int radianos;
    printf("Digite o valor em radianos: ");
    scanf("%d", &radianos);
    float seno = calcularSeno(radianos);
    printf("%f", seno);
    getchar();
    getchar();
    return 0;
}