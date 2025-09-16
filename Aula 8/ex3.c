#include <stdio.h>

int main() {
    int n = 0;
    printf("Num: ");
    scanf("%d", &n);
    for(int i = 0; i <= 10; i++) {
        int valor = n*i;
        printf("%d: %d\n", i, valor);
    }
    getchar();
    getchar();

    return 0;
}