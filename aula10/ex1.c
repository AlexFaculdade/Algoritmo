#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100], str4[100];
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);
    printf("Digite a terceira string: ");
    gets(str3);

    strcat(str4, str1);
    strcat(str4, str2);
    strcat(str4, str3);

    printf("\n\n string final: %s", str4);
    getchar();
    getchar();
    return 0;
}