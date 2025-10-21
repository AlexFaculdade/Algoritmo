#include <stdio.h>

int main() {
    int i, j, c = 0;
    scanf("%d", &i);
    while(i > 6) {
        j = i+2;
        do {
            c = c + j;
            j++;
        } while(j < 100);
        i--;
    }
    printf("%d", c);
    getchar();
    getchar();
    return 0;
}