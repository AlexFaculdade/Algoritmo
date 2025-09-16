#include <stdio.h>
#include <math.h>
#include <stdbool.h>

unsigned long long fatorial(int n);

int main()
{
    int valor;
    printf("Digite o num: ");
    scanf("%d", &valor);
    if(valor > 1 && ((fatorial(valor-1)) + 1)%valor == 0) {
        printf("eh primo");
    } else {
        printf("nao eh primo");
    }
    getchar();
    getchar();
    return 0;
}

unsigned long long fatorial(int n) {
    unsigned long long valor = 1;
    for(int i = 1; i <= n; i++) {
        printf("%d\n", valor);
        valor *= i;
    }
    return valor;
}