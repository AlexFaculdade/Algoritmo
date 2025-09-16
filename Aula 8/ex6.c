#include <stdio.h>

int main() {
    int nums [10];
    for(int i = 0; i < 10; i++) {
        int num = 0;
        printf("Num: ");
        scanf("%d", &num);
        nums[i] = num;
    }
    return 0;
}