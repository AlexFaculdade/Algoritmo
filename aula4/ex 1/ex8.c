#include <stdio.h>

int main() {
    float raio, area;
    printf("raio: ");
    scanf("%f", &raio);
    area = raio*raio*3.14;
    printf("area: %f\n", area);
    scanf("%f", &area);
    return 0;
}