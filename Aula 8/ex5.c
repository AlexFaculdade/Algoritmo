#include <stdio.h>

int main() {
    int n = 1;
    printf("Num: ");
    scanf("%d", &n);
    int valor = 1;
    for(int i = 1; i <= n; i++) {
        valor *= i;
    }
    printf("Fatorial: %d", valor);
    getchar();
    getchar();
    return 0;
}