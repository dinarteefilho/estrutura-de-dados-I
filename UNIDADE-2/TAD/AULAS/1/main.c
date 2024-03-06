#include <stdio.h>
#include "op.h"

int main() {
    int x = 10, y = 5;

    printf("Adicao: %d\n", adicao(x, y));
    printf("Subtracao: %d\n", subtracao(x, y));
    printf("Multiplicacao: %d\n", multiplicacao(x, y));
    
    printf("Divisao: %.2f\n", divisao(x, y));

    return 0;
}