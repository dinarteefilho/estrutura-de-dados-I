#include <stdio.h>
#include <stdlib.h>

// DEFININDO A ESTRUTURA PARA O INGRESSO
typedef struct {
    float preco;
    char local[50];
    char atracao[50];
} Ingresso;

// DEFININDO UMA FUNÇÃO PARA PREENCHER OS CAMPOS DA ESTRUTURA "INGRESSO"
void preenche(Ingresso* i) {
    printf("Digite o preco do ingresso: ");
    scanf("%f", &(i->preco));
    
    printf("Digite o local do evento: ");
    scanf(" %[^\n]s", i->local);
    
    printf("Digite a atracao do evento: ");
    scanf(" %[^\n]s", i->atracao);
}

// DEFININDO UMA FUNÇÃO PARA IMPRIMIR OS CAMPOS DA ESTRUTURA "INGRESSO"
void imprime(Ingresso* i) {
    printf("Preco: R$ %.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atracao: %s\n", i->atracao);
}

// DEFININDO UMA FUNÇÃO PARA SER POSSÍVEL ALTERAR O PREÇO DO INGRESSO
void altera_preco(Ingresso* i, float valor) {
    i->preco = valor;
}

// DEFININDO UMA FUNÇÃO QUE IMPRIMA QUAL O INGRESSO MAIS CARO E QUAL MAIS BARATO
void imprime_menor_maior_preco(int n, Ingresso* vet) {
    float menor_preco = vet[0].preco;
    float maior_preco = vet[0].preco;
    int numero_menor = 0, numero_maior = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < menor_preco) {
            menor_preco = vet[i].preco;
            numero_menor = i;
        }

        if (vet[i].preco > maior_preco) {
            maior_preco = vet[i].preco;
            numero_maior = i;
        }
    }

    printf("Evento mais barato:\n");
    imprime(&vet[numero_menor]);

    printf("\nEvento mais caro:\n");
    imprime(&vet[numero_maior]);
}

// FUNÇÃO PRINCIPAL PARA TESTAR AS FUNÇÕES DEFINIDAS ANTERIORMENTE
int main() {

    // SOLICITANDO AO USUARIO O NUMERO DE INGRESSOS A SEREM CADASTRADOS
    int num_ingressos;
    printf("Digite o numero de ingressos: ");
    scanf("%d", &num_ingressos);

    // ALOCANDO DINAMICAMENTE A ESTRUTURA "INGRESSO"
    Ingresso* ingressos = (Ingresso*)malloc(num_ingressos * sizeof(Ingresso));

    for (int i = 0; i < num_ingressos; i++) {
        printf("\nPreenchendo dados do ingresso %d:\n", i + 1);
        preenche(&ingressos[i]);
    }

    printf("\nIngressos cadastrados:\n");
    for (int i = 0; i < num_ingressos; i++) {
        printf("\nIngresso %d:\n", i + 1);
        imprime(&ingressos[i]);
    }

    printf("\n");

    // SOLICITANDO O NOVO VALOR A SER ALTERADO EM ALGUM DOS INGRESSOS
    float novo_preco;
    printf("Digite o novo preco para alteracao: ");
    scanf("%f", &novo_preco);

    // SOLICITANDO O NUMERO DO INGRESSO A SER ALTERADO
    int numero_altera;
    printf("Digite o numero do ingresso a ser alterado: ");
    scanf("%d", &numero_altera);

    altera_preco(&ingressos[numero_altera - 1], novo_preco);

    // IMPRIMINDO OS INGRESSOS APÓS SEREM ALTERADOS
    printf("\nIngressos apos a alteracao:\n");
    for (int i = 0; i < num_ingressos; i++) {
        printf("\nIngresso %d:\n", i + 1);
        imprime(&ingressos[i]);
    }
    
    // IMPRIMINDO OS EVENTOS DE INGRESSO MAIS BARATO E MAIS CARO
    printf("\nEventos de ingresso mais barato e mais caro:\n\n");
    imprime_menor_maior_preco(num_ingressos, ingressos);

    // LIBERANDO A MEMORIA ALOCADA DINAMICAMENTE DA ESTRUTURA "INGRESSO"
    free(ingressos);
    return 0;
}