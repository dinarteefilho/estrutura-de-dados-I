#include <stdio.h>
#include <stdlib.h>

int main(void){

    // 3 equivale o tamanho do vetor
    // sizeof é uma função que retorna o tamanho do vetor em bytes
    // (int) é o tipo do vetor

    int *vetor = malloc(3 * sizeof(int));
        if(vetor == NULL){
            printf("Erro na alocacao de memoria");
        exit(1);
    }
        else{
            printf("Memoria alocada com sucesso");
        }
    
    free(vetor);
    return 0;

}