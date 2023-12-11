#include <stdio.h>
#include <stdlib.h>

struct servidor {

    char nome[20];
    int idade;
    int documento;
    char servico[50];

};

void imprime(struct servidor * servidor1){
    printf("nome: %s\n", servidor1->nome);
    printf("idade: %d\n", servidor1->idade);
    printf("documento: %d\n", servidor1->documento);
    printf("servico: %s\n", servidor1->servico);
}

void preenche(struct servidor * servidor1){
    printf("digite seu nome: ");
    scanf(" %[^\n]", &servidor1->nome);
    printf("digite sua idade: ");
    scanf(" %d", &servidor1->idade);
    printf("digite seu documento: ");
    scanf(" %d", &servidor1->documento);
    printf("digite o seu servico: ");
    scanf(" %[^\n]", &servidor1->servico);
}

int main(void) {
   // ALOCAÇÃO DINAMICA DE STRUCT, POIS A VARIAVEL AGORA É UM PONTEIRO
    struct servidor * servidor1 = (struct servidor*) malloc(sizeof(struct servidor));
    if (servidor1 == NULL){
        exit(1);
    }
    preenche(servidor1);
    imprime(servidor1);
    free(servidor1);

    return 0;
}