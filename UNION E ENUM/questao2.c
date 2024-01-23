#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DEFININDO UMA UNION CHAMADA TIPO COM TRÊS MEMBROS PARA REPRESENTAR OS TIPOS DE PRODUTOS
typedef union tipo {
    char alimento[10];
    char bebida[10];
    char eletronico[10];
} Tipo;

// DEFININDO UMA ESTRUTURA CHAMADA PRODUTO PARA ARMAZENAR INFORMAÇÕES SOBRE UM PRODUTO
typedef struct Produto {
    char nome[10];
    float preco;
    Tipo tipo;  // UTILIZA A UNION TIPO PARA REPRESENTAR DIFERENTES TIPOS DE PRODUTOS
    int opcao;     // OPÇÃO PARA SELECIONAR O TIPO DE PRODUTO
} Item;

// FUNÇÃO PARA COLETAR INFORMAÇÕES SOBRE O PRODUTO
void Categoria_de_produto(Item *p) {

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", p->nome);

    printf("Informe o preco do produto: ");
    scanf("%f", &p->preco);

    printf("Digite 1 - para Alimento / 2 - para Bebida / 3 - para Eletronico: ");
    scanf("%d", &p->opcao);

    // UTILIZA UM SWITCH CASE PARA ATRIBUIR O TIPO CORRESPONDENTE COM BASE NA ESCOLHA DO USUÁRIO
        switch (p->opcao) {
        case 1:
            strcpy(p->tipo.alimento, "Alimento");
            break;
        case 2:
            strcpy(p->tipo.bebida, "Bebida");
            break;
        case 3:
            strcpy(p->tipo.eletronico, "Eletronico");
            break;
    }
}

int main(void) {
    // ALOCA DINAMICAMENTE A ESTRUTURA ITEM
    Item *produto = malloc(sizeof(Item));

    // CHAMA A FUNÇÃO PARA COLETAR INFORMAÇÕES SOBRE O
    Categoria_de_produto(produto);

    // EXIBINDO AS INFORMAÇÕES SOBRE O PRODUTO
    printf("Nome: %s\n", produto->nome);
    printf("Preco: %f\n", produto->preco);

    // UTILIZA UM SWITCH PARA EXIBIR O TIPO DO PRODUTO COM BASE NA ESCOLHA DO USUÁRIO
        switch (produto->opcao) {
        case 1:
            printf("Tipo do produto: %s\n", produto->tipo.alimento);
            break;
        case 2:
            printf("Tipo do produto: %s\n", produto->tipo.bebida);
            break;
        case 3:
            printf("Tipo do produto: %s\n", produto->tipo.eletronico);
            break;
    }

    // LIBERA A MEMORIA ALOCADA DINAMICAMENTE
    free(produto);
    return 0;
}