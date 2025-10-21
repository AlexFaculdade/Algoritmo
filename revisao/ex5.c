#include <stdio.h>

int main() {
    int i;
    for(i = 0; i < 5; i++) printf("%u\n", i++ << 2);
    getchar();
    getchar();

    return 0;
}