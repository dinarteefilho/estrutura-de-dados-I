#include <stdio.h> // scanf, printf
#include <stdlib.h> // função malloc, calloc, free e exit

int main(void){
    int tamanho = 5;
    int contador;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL){
        printf("Erro na alocação de memoria!\n");
        exit(1); // aborta a execução do programa
    }
    else{
        printf("Memoria alocada com sucesso!\n");
    }
    // ler os dados do vetor
    
    printf("Digite os valores do vetor:\n");
    for (contador = 0; contador < tamanho; contador++){
        scanf("%d", &vetor[contador]);
    }
    free (vetor);
    return 0;
}