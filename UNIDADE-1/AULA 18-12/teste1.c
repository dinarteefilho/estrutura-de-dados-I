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
    Disciplina materias;
} Aluno;