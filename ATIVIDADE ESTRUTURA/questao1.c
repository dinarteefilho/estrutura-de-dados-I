#include <stdio.h>

// exemplo de estrutura (struct)
/*struct nome {

};*/

// definindo a estrtura ALUNO
struct aluno {

    char nome[20];
    int idade;
    int matricula;
    char email[50];

};

int main(void) {
   
    struct aluno aluno1;

    printf("digite seu nome: ");
    scanf(" %[^\n]", &aluno1.nome);
    printf("digite sua idade: ");
    scanf("%d", &aluno1.idade);
    printf("digite sua matricula: ");
    scanf("%d", &aluno1.matricula);
    printf("digite seu email: ");
    scanf(" %[^\n]", &aluno1.email);

    printf("nome: %s\n", aluno1.nome);
    printf("idade: %d\n", aluno1.idade);
    printf("matricula: %d\n", aluno1.matricula);
    printf("email: %s\n", aluno1.email);

    return 0;
}