#include "aluno.c"
#include <stdlib.h>

int main(void){
    Aluno * aluno;

    aluno = recebe_dados();
    imprimir_dados(aluno);
    matricula(aluno);
    libera_memoria(aluno);
    free(aluno);
    
    return 0;
}