#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

// Função que inicializa a lista atribuindo NULL
// Retorna: Lista inicializada
Lista * cria_lista(void);

// Função que insere um elemento inteiro na lista
/* Argumentos: 
    Lista * lista;
    int valor - valor inteiro a ser inserido
Retorno:
    Nova lista
*/
Lista * insere_elemento (Lista * lista, int valor);

void imprimir_lista (Lista * lista);

void lista_vazia (Lista * lista);

void buscar_elemento (Lista * lista, int valor);