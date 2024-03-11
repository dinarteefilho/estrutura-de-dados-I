#include "disciplina.c"
#include "aluno.c"

#define MAX_ALUNO 40
#define MAX_DISCIPLINAS 12

int main() {
    Aluno *Alunos[MAX_ALUNO];
    Disciplina *disciplinas[MAX_DISCIPLINAS];
    int qtdaluno = 0, qtddisciplinas = 0;
    int opc = 0;
    int mat, cod;
    do
    {
        printf("\n[1]\tInserir uma disciplina\n");
        printf("[2]\tMatricular um aluno\n");
        printf("[3]\tMatricular um aluno em uma disciplina\n");
        printf("[4]\tExibir os alunos\n");
        printf("[5]\tExibir as disciplinas\n");
        printf("[0]\tSair\n");
        scanf("%d", &opc);
        switch (opc) {
        case 1:
            if (qtddisciplinas < MAX_DISCIPLINAS)
            {
                char nome[100];
                int Codigo;
                printf("Informe o nome da disciplina: ");
                scanf(" %[^\n]s", nome);
                printf("Informe a codigo da disciplina: ");
                scanf("%d", &Codigo);
                disciplinas[qtddisciplinas] = cria_disciplina(nome, Codigo);
                qtddisciplinas++;
            }
            else
            {
                printf("Atingiu o limite!\n");
            }
            break;
        case 2:
            if (qtdaluno < MAX_ALUNO)
            {
                char nome[100];
                int matricula;
                printf("Informe o nome do aluno: ");
                scanf(" %[^\n]s", nome);
                printf("Informe a matricula do aluno: ");
                scanf("%d", &matricula);
                Alunos[qtdaluno] = cria_aluno(nome, matricula);
                qtdaluno++;
            }
            else
            {
                printf("Atingiu o limite!\n");
            }
            break;
        case 3:
            printf("Informe o codigo da disciplina: ");
            scanf("%d", &cod);
            for (int j = 0; j < qtddisciplinas; j++)
            {
                if (disciplinas[j]->codigo == cod)
                {
                    printf("Informe a matricula do aluno: ");
                    scanf("%d", &mat);
                    for (int i = 0; i < qtdaluno; i++)
                    {
                        if (Alunos[i]->matricula == mat)
                        {
                            matricula_disciplina(Alunos[i], disciplinas[j]);
                            break;
                        }
                        else if (i == qtdaluno - 1)
                        {
                            printf("Esse aluno nao existe!\n");
                            break;
                        }
                    }
                    break;
                }
                else if (j == qtddisciplinas - 1)
                {
                    printf("Essa disciplina nao existe!\n");
                    break;
                }
            }

            break;
        case 4:
            for (int i = 0; i < qtdaluno; i++)
            {
                printf("\nAluno %d\n", i + 1);
                printf("Nome:%s\n", Alunos[i]->nome);
                printf("Matricula:%d\n", Alunos[i]->matricula);
                for (int j = 0; j < Alunos[i]->num_disciplinas; j++)
                {
                    printf("Disciplina: %s (Codigo: %d)\n", Alunos[i]->disciplinas[j]->nome, Alunos[i]->disciplinas[j]->codigo);
                }
            }
            break;
        case 5:
            for (int i = 0; i < qtddisciplinas; i++)
            {
                printf("\nDisciplina %d\n", i + 1);
                printf("Nome:%s\n", disciplinas[i]->nome);
                printf("Codigo:%d\n", disciplinas[i]->codigo);
            }
            break;
        case 0:
            printf("Grato pela contribuicao com o nosso programa!\n");
            break;
        default:
            printf("Essa opcao nao existe!\n");
            break;
        }
    } while (opc != 0);
    for (int i = 0; i < qtdaluno; i++)
    {
        exclui_aluno(Alunos[i]);
    }
    for (int i = 0; i < qtddisciplinas; i++)
    {
        exclui_disciplina(disciplinas[i]);
    }
    return 0;
}