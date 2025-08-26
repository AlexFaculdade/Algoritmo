#include <stdio.h>

int main() {
    int ano;
        //cout << "Digite o ano: " << endl;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if(ano % 4 == 0 && !(ano %100 == 0)) {
        printf("Year: %d is a leep year", ano);
    } else if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0) {
        printf("Year: %d is a leep year", ano);
    } else {
        printf("Year: %d isnt a leep year", ano);
    }

    scanf("%d", &ano);
}