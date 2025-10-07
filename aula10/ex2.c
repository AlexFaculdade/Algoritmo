#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    get(str);
    for(int i = len(str); i > 0; i--) {
        printf("%c", str[i]);
    }
    getchar();
    getchar();
    return 0;
}