#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converterMaiusculo(char str []) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    //Faça um programa que leia três palavras e transforme em maiúsculo
    char str [20];
    char str2 [20];
    char str3 [20];
    printf("Digite a primeira palavra: ");
    fgets(str, sizeof(str), stdin);
    converterMaiusculo(str);

    printf("Digite a segunda palavra: ");
    fgets(str2, sizeof(str), stdin);
    converterMaiusculo(str2);

    printf("Digite o terceira nome: ");
    fgets(str3, sizeof(str), stdin);
    converterMaiusculo(str3);

    printf("Primeira palavra %s\n", str);
    printf("Primeira palavra %s\n", str2);
    printf("Primeira palavra %s\n", str3);
    getchar();
    return 0;
}