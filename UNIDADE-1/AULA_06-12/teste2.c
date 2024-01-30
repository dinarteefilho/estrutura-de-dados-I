#include <stdio.h>
#include <stdlib.h>

/*Exercício: Aloque dinamicamente uma matriz de inteiros 5x5
e preencha cada elemento da matriz com o seu respectivo índice
(matriz[i][j] = i * 5 + j), e em seguida imprima a matriz.*/

int main() {
    
    // alocando a matriz de inteiros 5x5, tamanhos definidos
    int linhas = 5, colunas = 5;

    // alocação do vetor de ponteiros para as linhas da matriz estabelecida anteriormente
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        // alocação de cada linha da matriz
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // completando/preenchendo a matriz com valores calculados
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i * colunas + j;
        }
    }

    // imprimindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // liberando a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
