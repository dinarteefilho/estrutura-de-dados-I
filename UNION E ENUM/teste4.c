#include <stdio.h>

typedef enum bool{
    true, // AUTOMATICAMENTE O TRUE ASSUME O
    false // AUTOMATICAMENTE O FALSE ASSUME 1
}Bool;

int main(void){

    Bool resposta;

    printf("Voce gosta de algoritmo? \n 0- True\n 1- False\n");
    scanf("%u", &resposta);

    if (resposta == true){
        printf("Que top, voce gosta de algoritmo!\n");
    }
    else{
        printf("Que pena, voce nao gosta de algoritmo!\n");
    }
    return 0;
}