#include <stdio.h>

int main() {
    float tempCelsius, tempFahrenheit;
    printf("tempCelsius: ");
    scanf("%f", &tempCelsius);
    tempFahrenheit = (tempCelsius*9/5)+32;
    printf("tempFahrenheit: %f", tempFahrenheit);
    scanf("%f", &tempFahrenheit);
    return 0;
}