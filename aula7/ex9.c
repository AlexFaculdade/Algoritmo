#include <stdio.h>


int main() {
    int n = 0;
    double somaTotal = 0;
    printf("Digite a quantidade de somas de n: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--) {
        somaTotal += (double)(n - (i - 1)) / i;
    }
    printf("Soma total: %.2f\n", somaTotal);
    getchar();
    getchar();
    return 0;
}