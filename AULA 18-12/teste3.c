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
    Disciplina * materias; // ANINHAMENTO DA STRUCT DISCIPLINA NA STRUCT ALUNO
} Aluno;

int main(void) {
    
    // ALOCANDO MEMORIA PARA VARIAVEL ALUNO
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL){ 
        exit(1);
    }

    // ALOCANDO MEMORIA PARA O VETOR DA DISCIPLINA
    aluno -> materias = (Disciplina*) malloc (2*sizeof(Disciplina));
    if (aluno -> materias == NULL){ 
        exit(1);
    }

    printf("Informe os dados do aluno como Nome, Idade e Matricula:\n");
    scanf(" %[^\n]", &aluno -> nome);
    scanf("%d", &aluno -> idade);
    scanf("%d", &aluno -> matricula);
    
    // CADASTRO DE DISCIPLINA
    int i; // i = index
    for (i = 0; i < 2; i++);
        printf("Cadastro da disciplina %d:\n", i + 1);
        printf("Nome da disciplina: \n");
        scanf(" %[^\n]", &aluno -> materias[i].nome);
        printf("Nota da disciplina: \n");
        scanf("%f", &aluno -> materias[i].nota);
        printf("Codigo da disciplina: \n");
        scanf("%d", &aluno -> materias[i].codigo);

    return 0;
}