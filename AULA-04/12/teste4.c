#include <stdio.h>

int *cria_variavel(){
    int variavel = 5;
    return &variavel;
}

int main(){
    int *ponteiro = cria_variavel();
    printf("Valor da variavel: %d, *ponteiro");
    return 0;
}