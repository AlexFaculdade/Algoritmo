#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //fflush faz com que ao invés do texto ficar armazenado no buffer esperando ser utilizado, ele é
    //escrito imediatamente na tela ou num arquivo
    char str[100];
    printf("Digite str: ");
    scanf("%s", str);
    
    return 0;
}