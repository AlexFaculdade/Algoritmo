#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {   
    //Leia duas frases a copia a primeira para outra string
    char str [100];
    char str2 [100];
    
    for(int i = 0; i < 2; i++) {
        printf("%d frase: ", i+1);
        fgets(str, sizeof(str), stdin);
        if(i == 0) {
            strcpy(str2, str);
        }
        printf("Sua frase: %s", str);
    }

    printf("Essa é sua primeira frase copiada em outra string: %s", str2);
    getchar();
    getchar();
    

    return 0;
}