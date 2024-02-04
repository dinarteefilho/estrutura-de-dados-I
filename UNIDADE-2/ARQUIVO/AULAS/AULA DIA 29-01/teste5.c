#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c;
    int nlinhas = 0;
    FILE *fp;
    // ABRE ARQUIVO PARA LEITURA
    fp = fopen("entrada.txt", "wt");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    // LÊ O ARQUIVO
    while ((c = fgetc(fp)) != EOF){
        if (c == '\n'){
            nlinhas++;
        }
    }
    // FECHA O ARQUIVO
    fclose(fp);
    // EXIBE RESULTADO NA TELA
    printf("Numero de linhas = %d\n", nlinhas);
    return 0;
}