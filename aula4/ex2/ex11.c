#include <stdio.h>

int main() {
    int num;

    printf("num: ");
    scanf("%d", &num);
  
    if(num % 3 == 0) {
        printf("divisivel por 3");
    } else {
        printf("Nao divisivel");
    }
    scanf("%d", &num);
    return 0;
}