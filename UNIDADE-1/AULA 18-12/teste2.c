#include <stdio.h>
#include <stdlib.h>

// ANINHAMENTO DE ESTRUTURAS

typedef struct disciplina {
    char nome[20];
    float nota;
    int codigo;
} Disciplina;

typedef struct aluno {
    char nome[20];
    int idade;
    int matricula;
    Disciplina materias; // ANINHAMENTO DA STRUCT DISCIPLINA NA STRUCT ALUNO
} Aluno;

int main(void) {

    Aluno aluno; // DECLARADO UMA VARIÁVEL DO TIPO ALUNO
    aluno.idade = 15; // ACESSANDO A VARIAVEL IDADE DA STRUCT ALUNO
    aluno.matricula = 202311714; // ACESSANDO A VARIAVEL MATRICULA DA STRUCT ALUNO
    aluno.materias.codigo = 1234; // ACESSANDO A VARIAVEL CODIGO DA STRUCT DISCIPLINA
    aluno.materias.nota = 9.5; // ACESSANDO A VARIAVEL NOTA DA STRUCT DISCIPLINA

    printf("idade: %d\n", aluno.idade);
    printf("matricula: %d\n", aluno.matricula);
    printf("codigo: %d\n", aluno.materias.codigo);
    printf("nota: %f\n", aluno.materias.nota);

    return 0;
}