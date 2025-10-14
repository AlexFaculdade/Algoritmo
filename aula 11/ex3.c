#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fraseMinuscula(char str[]) {
    for(int i = 0; i != strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    //Leia 10 palavras e 2 frases em caixa alta e as imprima em letra minusculas usando os comandos
    //adequados

    for(int i = 0; i < 2; i++) {
        char str[100];
        printf("Digite a frase %d :", i+1);
        fgets(str, sizeof(str), stdin);
        fraseMinuscula(str);
        printf("%s\n", str);
    }

    for(int i = 0; i < 10; i++) {
        char str [20];
        printf("Digite a %d palavra: ", i+1);
        fgets(str, sizeof(str), stdin);
        for(int j = 0; j < strlen(str); j++) {
            str[j] = tolower(str[j]);
        }
        
        printf("%s\n", str);
    }

    getchar();
    getchar();

    return 0;
}