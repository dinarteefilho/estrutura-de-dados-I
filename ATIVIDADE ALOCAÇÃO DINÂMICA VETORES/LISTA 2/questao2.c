#include <stdio.h>
#include <stdlib.h>

int main(void){

    // pedindo o numero de questoes ao usuario e armazenando em uma variável
    int numeroDeQuestoes;
        printf("Digite o numero de questoes: ");
        scanf("%d",&numeroDeQuestoes);

    // alocando dinamicamente o gabarito
    char *gabarito = (char *) malloc((numeroDeQuestoes) * sizeof(char));
        
        // pedindo o gabarito ao usuario e armazenando em uma variável
        printf("Digite o gabarito da prova: ");
        scanf("%s", gabarito);

    // alocando dinamicamente as notas dos alunos
    float *notasDosAlunos = (float *) malloc(10 * sizeof(float));

    // loop for para solicitar as respostas de 10 alunos
    for (int i = 0; i < 10; i++){
        // alocando dinamicamento as repostas dos alunos
        char *respostasDoAluno = (char *) malloc((numeroDeQuestoes + 1) * sizeof(char));

        printf("Respostas do aluno %d: ", i + 1);
        scanf("%s", respostasDoAluno);

        // etapa que percorre cada questao e compara as respostas com o gabarito 
        float nota = 0;
        for (int j = 0; j < numeroDeQuestoes; j++){
            if (respostasDoAluno[j] == gabarito[j]){
                nota += 10.0 / numeroDeQuestoes;
            }
        }
        notasDosAlunos[i] = nota;
        printf("Nota do aluno %d: %.2f\n", i + 1, nota);

        // liberando a memoria alocada para as repostas do aluno
        free(respostasDoAluno);
    }
        // calculando a porcentagem de aprovacao
        int aprovados = 0;
            for (int i = 0; i < 10; i++){
                if (notasDosAlunos[i] >= 6.0){
                    aprovados++;
                }
            }

        float porcentagemAprovacao = (float)aprovados / 10.0 * 100.0;
        printf("\nPorcentagem de aprovacao: %.2f%%\n", porcentagemAprovacao);

        // liberando a memoria alocada dinamicamente do gabarito e das notas dos alunos
        free(gabarito);
        free(notasDosAlunos);

        return 0;    
    }