#include <stdio.h>

int main() {
    // Crie um programa que leia um número N e verifique se ele é um número
    // primo utilizando for.
    int n = 0, primo = 1;
    printf("Num: ");
    scanf("%d", n);
    for(int i = 0; i < n; i++) {
        if(i != 0 && i != 1) {
            if(n%i == 0) {
                primo = 0;
            }
        }
    }
    if(primo == 0) {
        printf("Numero eh primo");
    } else {
        printf("Numero nao eh primo");
    }
    getchar();
    getchar();
    return 0;
}