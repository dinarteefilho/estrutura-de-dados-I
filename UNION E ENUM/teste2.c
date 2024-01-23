#include<stdio.h>
#include<stdlib.h>

// DEFININDO A UNION "DOCUMENTOS"
typedef union documentos{
    char rg[9];
    char cpf[11];
}Documentos;

// DEFININDO A ESTRUTURA "PESSOAL"
typedef struct pessoal{
    char nome[40];
    int idade;
    Documentos doc; // A ESTRUTURA CONTEM UMA UNION "DOCUMENTOS" PARA ARMAZENAR INFOS
}Pessoal;

// FUNCAO PARA PREENCHER OS DADOS PESSOAIS
void preenche (Pessoal * p){
    int opcao;
    printf("Informe o seu nome:\n");
    scanf(" %[^\n]", p->nome);

    printf("Informe a sua idade:\n");
    scanf("%d", &p->idade);

    // SE A OPCAO FOR 1, SOLICITA E ARMAZENA O CPF, CASO CONTRÁRIO, SOLICITA E ARMAZENA O RG
    printf ("Digite 1 para o CPF ou 0 para o RG:\n");
    scanf("%d", &opcao);
    if (opcao == 1){
        printf("Informe o seu CPF:\n");
        scanf (" %[^\n]", p->doc.cpf);
    }
    else{
        printf ("Informe o seu RG:\n");
        scanf(" %[^\n]", p->doc.rg);
    }
}

int main (void){
    // ALOCA DINAMICAMENTE A ESTRUTURA PESSOAL
    Pessoal *pessoal = malloc(sizeof(pessoal));
    // CHAMANDO A FUNCAO PARA PREENCHER OS DADOS PESSOAIS
    preenche(pessoal);
    // IMPRIMINDO OS DADOS PESSOAIS
    printf ("o seu CPF: %s\n", pessoal->doc.cpf);
    printf ("o seu RG: %s\n", pessoal->doc.rg);
    // LIBERANDO A MEMORIA ALOCADA DINAMICANTE DA ESTRUTURA PESSOAL
    free(pessoal);
    return 0;
}