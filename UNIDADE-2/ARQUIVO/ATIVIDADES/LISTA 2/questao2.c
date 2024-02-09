#include <stdio.h>

#define MAX_ALUNOS 100 // DEFININDO UM NÚMERO MÁXIMO DE ALUNOS

typedef struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    int num_alunos, i;
    FILE *arquivo;
    struct Aluno alunos[MAX_ALUNOS];

    arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro, tente novamente!");
        return 1;
    }

    printf("Digite a quantidade de alunos para serem cadastradas: ");
    scanf("%d", &num_alunos);

    for (i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Primeira nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Segunda nota: ");
        scanf("%f", &alunos[i].nota2);
        printf("Terceira nota: ");
        scanf("%f", &alunos[i].nota3);

        fprintf(arquivo, "%s %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);
    }

    fclose(arquivo);

    printf("\nDados dos alunos armazenados no arquivo 'alunos.txt'.\n");

    return 0;
}