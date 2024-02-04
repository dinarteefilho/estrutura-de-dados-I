#include <stdio.h>
#include <stdlib.h>

int main(void){
    char c[20];

    FILE* fp;
    fp = fopen("escrita.txt", "wt"); // ABRE O ARQUIVO CRIADO
        if (fp == NULL)
        {
            printf("Erro na abertura do arquivo!\n");
        }
        else
        {
            printf("Arquivo aberto com sucesso!\n");
        }

    // fputc('a', fp); // ESCREVE NO ARQUIVO CRIADO
    // fputs("dinarte", fp); // ESCREVE UMA STRING NO ARQUIVO CRIADO
    fprintf(fp, "O meu nome"); // PASSAR A STRING PARA DENTRO DO ARQUIVO 
    
    fscanf(fp, "%s", c); // OUTRA FORMA DE LER O ARQUIVO
    printf("%s\n", c);

    fclose(fp); // FECHA O ARQUIVO CRIADO
        
    return 0;                   
}