#include <stdio.h>

void validaTriangulo(float ladoX, float ladoY, float ladoZ) {
    // O lado a + o lado b deve ser maior que o lado c.
    // O lado a + o lado c deve ser maior que o lado b.
    // O lado b + o lado c deve ser maior que o lado a.
    // Triângulo equilátero: Se a = b = c.
    // Triângulo isósceles: Se a = b, ou a = c, ou b = c.
    // Triângulo escaleno: Se a ≠ b ≠ c.
    if(ladoX + ladoY < ladoZ || ladoX + ladoZ < ladoY || ladoY + ladoZ < ladoX) {
        printf("Triangulo invalido\n");
    } else if(ladoX == ladoY && ladoX == ladoZ) {
        printf("Triangulo equilatero\n");
    } else if(ladoX == ladoY || ladoX == ladoZ || ladoY == ladoZ){
        printf("Triangulo isosceles\n");
    } else if(ladoX != ladoY && ladoY != ladoZ) {
        printf("Triangulo escaleno\n");
    }
}

int main() {
    float ladoX, ladoY, ladoZ;
    printf("Digite o lado X: ");
    scanf("%f", &ladoX);

    printf("Digite o lado Y: ");
    scanf("%f", &ladoY);

    printf("Digite o lado Z: ");
    scanf("%f", &ladoZ);

    validaTriangulo(ladoX, ladoY, ladoZ);
    getchar();
    getchar();
    return 0;
}