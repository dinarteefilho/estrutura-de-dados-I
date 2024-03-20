#include "circular.h"

struct _fila {
    int inicio, fim; // indica o inicio e fim da fila
    int quantidade; // quantidade de elementos da fila
    int MAX_SIZE; // tamanho maximo da fila
    int *valor; //vetor dos valores
};

Fila *Q;

// criando a fila
Fila *CriaFila(int MAX_SIZE) {
    Fila *Q = (Fila*)calloc(1, sizeof(Fila));

    Q->valor = (int*)calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->quantidade = 0;
    Q->inicio = Q->fim = 0;

    return Q;
}

// destruindo a fila
void DestruirFila(Fila **Q) {
    Fila *Qaux = *Q;
    free(Qaux->valor); 
    free(Qaux);
    *Q = NULL;
}

// verifica se a fila esta vazia
int FilaVazia(Fila *Q) {
    return (Q->quantidade == 0);
}

// verifica se a fila esta cheia
int FilaCheia(Fila *Q) {
    return (Q->quantidade == Q->MAX_SIZE);
}

// insere um elemento na fila
int InsereFila(Fila *Q, int elem) {
    if(FilaCheia(Q)) {
        printf("Fila esta cheia \n");
        return 0;
    } else {
        Q->valor[Q->fim] = elem;
        Q->fim = (Q->fim + 1) % Q->MAX_SIZE;
        Q->quantidade++;
        return 1; 
    }
}

// remove um elemento da fila
int RemoveFila(Fila *Q) {
    if(FilaVazia(Q)) {
        printf("Fila esta vazia \n");
        return 0; 
    } else {
        Q->inicio = (Q->inicio + 1) % Q->MAX_SIZE;
        Q->quantidade--;
        return 1; 
    }
}

// consulta um elemento na fila
int ConsultaFila(Fila *Q, int *elem) {
    if(FilaVazia(Q)) {
        printf("Fila esta vaiza \n");
        return 0;
    } else {
        *elem = Q->valor[Q->inicio];
        return 1;
    }
}

// imprime os elementos da fila
void ImprimirFila(Fila *Q) {
    for(int i = 0; i < Q->quantidade; i++) {
        printf("%i\n", Q->valor[i]);
    }
}