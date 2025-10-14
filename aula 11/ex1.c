#include <stdio.h>
#include <string.h>

int main() {
    //Faça um programa que leia um nome e imprima o mesmo
    //Use gets e fgets e veja a diferença
    //fgets é possível definir o tamanho do buffer e gets não
    char str [20];
    printf("Digite seu nome: ");
    gets(str);
    //fgets(str, 19, stdin);    
    printf("%s", str);

    return 0;
}