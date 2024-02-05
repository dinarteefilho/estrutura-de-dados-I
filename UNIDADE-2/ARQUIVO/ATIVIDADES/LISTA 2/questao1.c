#include <stdio.h>
#include <stdlib.h>


int main(void){
    int id, total;
    char nome[50];
    float salario;

    FILE *info_funcionarios;

    info_funcionarios = fopen("info_funcionarios.txt","w");

    if(info_funcionarios == NULL){
        printf("Erro, tente novamente!\n");
        exit (1);
    }
    printf("Digite a quantidade de funcionarios para realizar o cadastro: ");
    scanf("%d",&total);

    for(int i = 0; i <total; i++){
        printf("O ID DO FUNCIONARIO = %d\n",i+1);
        printf("Digite o nome do funcionario: ");
        scanf("%s",nome);
        printf("Digite o salario do funcionario: ");
        scanf("%f",&salario);
        id = i+1;
        
        fprintf(info_funcionarios,"Informacoes do %d funcionario \n NOME %s \n SALARIO %.2f \n ID: %d\n",i+1, nome,salario,id);
        }

        printf("Todos os cadastros foram realizados com sucesso!!");

        fclose(info_funcionarios);

    return 0;
}