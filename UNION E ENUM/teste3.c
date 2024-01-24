#include <stdio.h>

// MANEIRA DE DEFINIR CONSTANTES EM C
#define TRUE 0
#define FALSE 1

int main(void){
    int resposta;
    printf("Voce gosta de algoritmo? \n 0- True\n 1- False\n");
    scanf("%d", &resposta);
    if (resposta == TRUE){
        printf("Que top, voce gosta de algoritmo!\n");
    }
    else{
        printf("Que pena, voce nao gosta de algoritmo!\n");
    }
    return 0;
}