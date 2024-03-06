#include <stdio.h>
#include "op.h"

int adicao(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b != 0) {
        return (float) a / b;
    } else {
        printf("Erro: Divisao por zero.\n");
        return 0.0;
    }
}