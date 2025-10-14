#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char str2[100];
    char str3[200];

    printf("Digite a primeira frase: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite a sua segunda frase: ");
    fgets(str2, sizeof(str2), stdin);

    strcat(str3, str);
    strcat(str3, str2);
    printf("Sua string concatenada ficou: %s", str3);
    getchar();
    getchar();

    return 0;
}