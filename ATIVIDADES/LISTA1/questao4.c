#include <stdio.h>
#include <math.h>

void calcula_hexagono(float lado, float *area, float *perimetro) {
    *area = (3 * pow(1,2) * sqrt(3)) / 2;
    *perimetro = 6 * lado;
}

int main(void) {
    float lado, area, perimetro;

    printf("Digite o valor do lado do hexagono: ");
    scanf("%f", &lado);

    calcula_hexagono(lado, &area, &perimetro);

    printf("Area do hexagono: %.2f\n", area);
    printf("Perimetro do hexagono: %.2f\n", perimetro);

    return 0;
}