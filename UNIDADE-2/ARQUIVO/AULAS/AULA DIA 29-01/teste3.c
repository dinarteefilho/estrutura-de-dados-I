#include <stdio.h>
#include <stdlib.h>

int main(void){
    char c[20];

    FILE* fp;
    fp = fopen("teste.txt", "rt"); // ABRE O ARQUIVO CRIADO
        if (fp == NULL)
        {
            printf("Erro na abertura do arquivo!\n");
        }
        else
        {
            printf("Arquivo aberto com sucesso!\n");
        }

    fscanf(fp, "%s", c); // OUTRA FORMA DE LER O ARQUIVO
    printf("%s\n", c);

    fclose(fp); // FECHA O ARQUIVO CRIADO
        
    return 0;                   
}