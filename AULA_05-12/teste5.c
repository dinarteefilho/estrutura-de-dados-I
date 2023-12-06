#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *nome = (char *) malloc(50 * sizeof(char));
    if (nome == NULL){
        printf("Erro na alocacao de memoria!\n");
        exit(1);
    }
    else{
        printf("Memoria alocada com sucesso!\n");
    }
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Seu nome: %s\n", nome);

    free(nome);
    return 0;
}

// usando o tipo caractere (char)