#include <stdio.h>
 
int main() {
    int n = 0;
    printf("Num:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 ==0) {
            printf("%d\n", i);
        }
    }

    getchar();
    getchar();
    return 0;
}