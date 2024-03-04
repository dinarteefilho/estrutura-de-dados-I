#include "lista.h"

typedef struct lista {
    int infomacao;
    struct lista *proximo_elemento;
}Lista;

Lista* cria_lista(void) {
    return NULL;
}

// Função que insere um elemento inteiro na lista
Lista * insere_elemento(Lista * lista, int i) {
    // Aloca o novo no da lista encadeada
    Lista * novo_no = (Lista *) malloc(sizeof(Lista));
    if (novo_no == NULL) {
        exit(1);
    }
    // Adiciona o valor no campo informação
    novo_no->infomacao = i;
    // Conecta o novo nó a lista
    novo_no->proximo_elemento = lista;
    return novo_no;
}

// Função que imprime todos os elementos da lista
void imprimir_lista(Lista * lista) {
    Lista * contador;
    for (contador = lista; contador != NULL; contador = contador->proximo_elemento) {
        printf("%d\n", contador->infomacao);
    }
}

// Função que verifica se a lista esta vazia
void lista_vazia (Lista * lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    }
    else {
        printf("Lista nao vazia\n");
    }
}

// Função que busca um elemento na lista
void buscar_elemento (Lista * lista, int valor) {
    Lista * contador;
    for (contador = lista; contador != NULL; contador = contador->proximo_elemento) {
        if (valor == contador->infomacao) {
            printf("Elemento encontrado\n");
            return;
        }
    }
    printf("Elemento nao encontrado\n");
}