#include <stdio.h>
#include <stdlib.h>

struct infoPessoais{
    char nome[20];
    int idade;
    int rg;
};

void preenche(struct infoPessoais *pessoas){
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoas -> nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoas -> idade);

    printf("Digite o rg: ");
    scanf("%d", &pessoas -> rg);
} 

void imprime(struct infoPessoais *pessoas){
    printf("Nome: %s\n", pessoas -> nome);
    printf("Idade: %d\n", pessoas -> idade);
    printf("Rg: %d\n", pessoas -> rg);
}

void alteraIdade(struct infoPessoais *pessoas){
    printf("Digite a nova idade:");
    scanf("%d", &pessoas -> idade);
}

void maisVelhoMaisNovo(struct infoPessoais *pessoas, int n){
    int maior_idade = pessoas[0].idade;
    int menor_idade = pessoas[0].idade;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 0; i < n; i++){
        if(pessoas[i].idade > maior_idade){
            maior_idade = pessoas[i].idade;
            posicao_maior = i;
        }
        else if(pessoas[i].idade < menor_idade){
            menor_idade = pessoas[i].idade;
            posicao_menor = i;
        }
    }

    printf("A pessoa mais velha: %s " "idade: %d\n", pessoas[posicao_maior].nome, pessoas[posicao_maior].idade);

    printf("A pessoa mais nova: %s " "idade: %d", pessoas[posicao_menor].nome, pessoas[posicao_menor].idade);

}

int main(void){

    int quantidadePessoas, posicao, opcaoEscolha;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &quantidadePessoas);

    struct infoPessoais *pessoas = (struct infoPessoais*) malloc (quantidadePessoas * sizeof(struct infoPessoais));

    for(int i = 0; i < quantidadePessoas; i++){
        printf("------------------------------------\n");
        printf("Digite os dados da pessoa %d\n", i+1);
        preenche(&pessoas[i]);
    }

    for(int i = 0; i < quantidadePessoas; i++){
        printf("------------------------------------\n");
        printf("Dados da pessoa %d\n", i+1);
        imprime(&pessoas[i]);
    }  

    printf("Deseja alterar a idade de alguma pessoa? (1 - SIM, 2 - NAO): ");
    scanf("%d", &opcaoEscolha);

    if(opcaoEscolha ==1){
    
    printf("Digite a posicao da pessoa que deseja alterar a idade: ");
    scanf("%d", &posicao);

    alteraIdade(&pessoas[posicao]);
    }

    maisVelhoMaisNovo(pessoas, quantidadePessoas);

    free(pessoas);
    return 0;
}