#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// DEFININDO A UNION "GENERO"
typedef union genero {
    char masculino[10];
    char feminino[10];
} Genero;

// DEFININDO A ESTRUTURA "PESSOAL"
typedef struct pessoal {
    char nome[40];
    int idade;
    Genero sexo; // A ESTRUTURA CONTEM UMA UNION "GENERO"
    int opcao;   // VARIAVEL USADA PARA ARMAZENAR A OPCAO DE GENERO
} Pessoal;

// FUNCAO PARA PREENCHER OS DADOS PESSOAIS
void preenche(Pessoal *p) {
    printf("Informe o seu nome:\n");
    scanf(" %[^\n]", p->nome);

    printf("Informe a sua idade:\n");
    scanf("%d", &p->idade);

    printf("Digite 1 para Masculino ou 0 para Feminino:\n");
    scanf("%d", &p->opcao);

    // SE A OPCAO FOR "1", COPIA "MASCULINO" PARA A UNION, CASO CONTRÁRIO, COPIA "FEMININO"
    if (p->opcao) {
        strcpy(p->sexo.masculino, "Masculino");
    } else {
        strcpy(p->sexo.feminino, "Feminino");
    }
}

int main(void) {
    // ALOCA DINAMICAMENTE A ESTRUTURA PESSOAL
    Pessoal *pessoal = malloc(sizeof(Pessoal));

    // CHAMANDO A FUNÇÃO PARA PREENCHER OS DADOS PESSOAIS
    preenche(pessoal);

    // IMPRIME OS DADOS PESSOAIS 
    printf("Nome: %s\n", pessoal->nome);
    printf("Idade: %d\n", pessoal->idade);

    // VERIFICA A OPCAO DE GENERO ESCOLHIDA E IMPRIME O GENERO
    // QUE CORRESPONDE A ESCOLHA
    if (pessoal->opcao) {
        printf("Sexo: %s\n", pessoal->sexo.masculino);
    } else {
        printf("Sexo: %s\n", pessoal->sexo.feminino);
    }

    // LIBERANDO A MEMORIA ALOCADA DINAMICANTE DA ESTRUTURA PESSOAL
    free(pessoal);
    return 0;
}
