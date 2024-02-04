#include <stdio.h>
#include <stdlib.h>

struct aluno {

    char nome[20];
    int idade;
    int matricula;
    char email[50];

};

void imprime(struct aluno * aluno1){
    printf("nome: %s\n", aluno1->nome);
    printf("idade: %d\n", aluno1->idade);
    printf("matricula: %d\n", aluno1->matricula);
    printf("email: %s\n", aluno1->email);
}

void preenche(struct aluno * aluno1){
    printf("digite seu nome: ");
    scanf(" %[^\n]", &aluno1->nome);
    printf("digite sua idade: ");
    scanf("%d", &aluno1->idade);
    printf("digite sua matricula: ");
    scanf("%d", &aluno1->matricula);
    printf("digite seu email: ");
    scanf(" %[^\n]", &aluno1->email);
}

int main(void) {
   // ALOCAÇÃO DINAMICA DE STRUCT, POIS A VARIAVEL AGORA É UM PONTEIRO
    struct aluno * aluno1 = (struct aluno*) malloc(sizeof(struct aluno));
    if (aluno1 == NULL){
        exit(1);
    }
    preenche(aluno1);
    imprime(aluno1);
    free(aluno1);

    return 0;
}