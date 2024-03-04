#include "lista.h"

int main(void) {

    // Criando uma lista encadeada
    Lista * lista_encadeada = cria_lista();

    // Inserindo elementos na lista encadeada
    lista_encadeada = insere_elemento (lista_encadeada, 3);
    lista_encadeada = insere_elemento (lista_encadeada, 2);
    lista_encadeada = insere_elemento (lista_encadeada, 1);

    // Imprimindo a lista encadeada
    imprimir_lista (lista_encadeada);

    // Verificando se a lista encadeada esta vazia
    lista_vazia (lista_encadeada);

    // Buscando um elemento na lista encadeada
    buscar_elemento (lista_encadeada, 2);

    return 0;
}