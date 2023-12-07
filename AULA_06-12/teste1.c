#include <stdio.h>
#include <stdlib.h>

// alocando dinamicamente uma matriz 3x3

int main() {
    // tamanho da matriz
    int linhas = 3, colunas = 3, i, j;

    // alocação do vetor de ponteiros para as linhas da matriz estabelecida anteriormente
    int **matriz = (int **)malloc(linhas * sizeof(int *));

    // alocação de cada linha da matriz
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // iniciando a matriz com valores padrão (0) que é opcional
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = 0; // nessa etapa pode ser atribuido qualquer valor
        }
    }

    // a partir daqui a matriz está pronta para ser utilizada

    // é necessário lembrar de liberar a memória alocada quando não precisar mais da matriz
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}