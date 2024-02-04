#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *entrada;
    entrada = fopen("entrada_q1.txt", "rt");
    FILE *saida;
    saida = fopen("saida_q1.txt", "wt");
    if (entrada == NULL || saida == NULL){
        printf("Erro, tente novamente!\n");
        return 1;
    }
    char nome[20], linha[100];
    float media = 0, notas[3];
    
    while (fgets(linha, 100, entrada) != NULL){
        media = 0;
        sscanf(linha, "%[^\t]%f\t%f\t%f", nome, &notas[0], &notas[1], &notas[2]);
        media = (notas[0]+notas[1]+notas[2])/3;
        fprintf(saida, "%s\t%.1f\t%s\n",nome,media,(media>= 7) ? "aprovado":"reprovado");
    }
    fclose(entrada);
    fclose(saida);
    return 0;
} 