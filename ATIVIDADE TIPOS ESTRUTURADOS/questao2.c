#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DEFININDO AS CONSTANTES "ALUNOS" E "NOME"
#define MAX_ALUNOS 50
#define MAX_NOME 80

// DEFININDO UMA ESTRUTURA "ALUNO"
typedef struct {
    int matricula;
    char nome[MAX_NOME];
    char turma;
    float notas[3];
    float media;
} Aluno;

void inicializa_alunos(Aluno** alunos) {
    for (int i = 0; i < MAX_ALUNOS; i++) {
        alunos[i] = NULL;
    }
}

// DEFININDO UMA FUNÇÃO PARA REALIZAR A MATRICULA DOS ALUNOS
// SENDO CAPAZ DE CAPTAR TODAS AS INFORMAÇOES DO ALUNO
void matricula(int n, Aluno** alunos) {
    if (n >= 0 && n < MAX_ALUNOS && alunos[n] == NULL) {
        alunos[n] = (Aluno*)malloc(sizeof(Aluno));

        printf("Matricula: ");
        scanf("%d", &alunos[n]->matricula);
        printf("Nome: ");
        scanf("%s", alunos[n]->nome);
        printf("Turma(A ou B): ");
        scanf(" %c", &alunos[n]->turma);

        printf("Notas: ");
        for (int i = 0; i < 3; i++) {
            scanf("%f", &alunos[n]->notas[i]);
        }

        alunos[n]->media = 0.0;
    } else {
        printf("Erro: Nao ha vaga disponivel para matricula.\n");
    }
}

// DEFININDO UMA FUNÇÃO PARA LANÇAR AS NOTAS
void lanca_notas(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            float soma = 0.0;
            for (int j = 0; j < 3; j++) {
                soma += alunos[i]->notas[j];
            }
            alunos[i]->media = soma / 3.0;
        }
    }
}

// DEFININDO UMA FUNÇÃO QUE IMPRIME TODAS AS INFORMAÇÕES DA ESTRUTURA "ALUNO"
void imprime_tudo(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL) {
            printf("Matricula: %d, Nome: %s, Turma: %c, Media: %.2f\n",
                   alunos[i]->matricula, alunos[i]->nome, alunos[i]->turma, alunos[i]->media);
        }
    }
}

// DEFININDO UMA FUNÇÃO QUE IMPRIME AS INFORMAÇÕES DA TURMA EM ESPECIFICO
void imprime_turma(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma) {
            printf("Matricula: %d, Nome: %s, Turma: %c, Media: %.2f\n",
                   alunos[i]->matricula, alunos[i]->nome, alunos[i]->turma, alunos[i]->media);
        }
    }
}

// DEFININDO UMA FUNção QUE IMPRIME OS ALUNOS APROVADOS NA TURMA
void imprime_turma_aprovados(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
        if (alunos[i] != NULL && alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
            printf("Matricula: %d, Nome: %s, Turma: %c, Media: %.2f\n",
                   alunos[i]->matricula, alunos[i]->nome, alunos[i]->turma, alunos[i]->media);
        }
    }
}

// FUNÇÃO PRINCIPAL PARA TESTAR AS FUNÇÕES DEFINIDAS ANTERIORMENTE
int main() {
    Aluno* alunos[MAX_ALUNOS];
    inicializa_alunos(alunos);

    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));

    // A FUNÇÃO MATRÍCULA PARA 3 ALUNOS
    matricula(0, alunos);
    matricula(1, alunos);
    matricula(2, alunos);

    lanca_notas(3, alunos);

    printf("\nDados de todos os alunos:\n");
    imprime_tudo(3, alunos);

    printf("\nDados da turma A:\n");
    imprime_turma(3, alunos, 'A');

    printf("\nAlunos aprovados na turma A:\n");
    imprime_turma_aprovados(3, alunos, 'A');

    // LIBERANDO A MEMORIA ALOCADA DINAMICAMENTE
    for (int i = 0; i < MAX_ALUNOS; i++) {
        free(alunos[i]);
    }

    free(aluno);
    return 0;
}