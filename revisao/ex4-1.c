#include <stdio.h>

int main() {
    int i, j, c = 0;
    scanf("%d", &i);
    do {
        j = i + 2;
        while(j < 10) {
            c = c + j;
            j++;
        }
        i--;
    } while(i > 6);
    printf("%d", c);
    getchar();
    getchar();
    return 0;
}