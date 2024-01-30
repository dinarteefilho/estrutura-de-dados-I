#include <stdio.h>
#include <stdlib.h>

int main(void){

    int tamanho_do_vetor;
    float masculinoGostou = 0;
    float masculinoNaoGostou =0;
    float femininoGostou = 0;
    float femininoNaoGostou =0;

        printf("Quantas pessoas voce quer pesquisar: ");
        scanf("%d",&tamanho_do_vetor);

    int *vetor_de_resposta_do_tipo_de_sexo = (int *) malloc(tamanho_do_vetor * sizeof(int));
    int *vetor_de_opinioes = (int *) malloc(tamanho_do_vetor *sizeof(int));

    if(vetor_de_resposta_do_tipo_de_sexo == NULL && vetor_de_opinioes == NULL){
        printf("ERRO DE LOCAÇÃO DE MEMORIA\n");
        exit(1);
    }

    for (int i = 0; i < tamanho_do_vetor; i++){
        printf("Digite o sexo da pessoa %d -> "
        "1- Masculino  2- Feminino: ", i + 1);
        // armazenando o sexo da pessoa
        scanf("%d",&vetor_de_resposta_do_tipo_de_sexo[i]);

        printf("Digite a opiniao sobre o produto %d -> "
        "1 - Gostou  2 - Nao Gostou: ", i + 1);
        // armazenando a opiniao da pessoa
        scanf("%d",&vetor_de_opinioes[i]);
    }

    for (int i = 0; i < tamanho_do_vetor; i++){

        if(vetor_de_resposta_do_tipo_de_sexo[i] == 2 && vetor_de_opinioes[i] == 1){
            femininoGostou++;
        }

        else if(vetor_de_resposta_do_tipo_de_sexo[i] == 1 && vetor_de_opinioes[i] == 2){
            femininoNaoGostou++;

        }
    }

    femininoGostou = (femininoGostou / tamanho_do_vetor) * 100;
    femininoNaoGostou = (femininoNaoGostou / tamanho_do_vetor) * 100;
    masculinoGostou = (masculinoGostou / tamanho_do_vetor) * 100;
    masculinoNaoGostou = (masculinoNaoGostou / tamanho_do_vetor) * 100;

        printf("O total de pessoas que responderam a pesquisa foi: %d\n",tamanho_do_vetor);

    // imprimindo a porcentagem de pessoas do sexo feminino que responderam
    // que gostaram do produto, como foi pedido na alternativa B.
        printf("A porcentagem de pessoas do sexo feminino que gostaram do produto foi: %.2f porcento\n", femininoGostou);

    // imprimindo a porcentagem de pessoas do sexo masculino que responderam
    // que não gostaram do produto, como foi pedido na alternativa C.
        printf("A porcentagem de pessoas do sexo masculino que nao gostaram do produto foi: %.2f porcento\n", masculinoNaoGostou);

    free(vetor_de_resposta_do_tipo_de_sexo);
    free(vetor_de_opinioes);
    return 0;

}

/* as alternativa B e C pedem para o programa imprimir a porcentagem de pessoas do sexo feminino que responderam
que gostaram do produto e que não gostaram do produto, respectivamente. Portanto, fiz o programa para armazenar
também as outras duas posibilidades de resposta, logo, imprimi apenas o que foi pedido. */