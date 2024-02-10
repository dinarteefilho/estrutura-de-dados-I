#include <stdio.h>
#include <stdlib.h>

typedef struct Loja{
    char nome_da_fruta[20];
    float preco;
}frutas;

int main(void){
    int op;
    frutas loja;
    FILE *arquivo_frutas = fopen("frutas.txt","w");

    if(arquivo_frutas == NULL){
        printf("Erro, tente novamente!");
        exit(1);
    }

    do{
        printf("Digite o nome da fruta: ");
        scanf("%s",loja.nome_da_fruta);
        
        printf("Digite o preco da fruta: ");
        scanf("%f",&loja.preco);

        fprintf(arquivo_frutas,"\nNome da fruta: %s \n Preco: %.2f \n",loja.nome_da_fruta,loja.preco);

        printf("Deseja continuar o processo de cadastramento (1-SIM/2-NAO): ");
        scanf("%d",&op);
    }while (op != 2);

    printf("O cadastro das frutas foi concluido!");

    fclose(arquivo_frutas);

    return 0;
}