#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c;

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

    c = fgetc(fp); // LE O ARQUIVO CRIADO, APENAS UM CARACTERE
    printf("%c\n", c);

    fclose(fp); // FECHA O ARQUIVO CRIADO
        
    return 0;                   
}