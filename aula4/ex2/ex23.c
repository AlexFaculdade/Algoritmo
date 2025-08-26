#include <stdio.h>
#include <string.h>

int main() {
    char user [20];
    char password [20];
    printf("Digite seu usuario: ");
    scanf("%19s", user);
    printf("Digite sua senha: ");
    scanf("%19s", password);

    if(strcmp(user, "admin") == 0  && strcmp(password, "123") == 0) {
        printf("Acesso permitido");
    } else {
        printf("Acesso negado");
    }

    getchar();
    getchar();
 
}