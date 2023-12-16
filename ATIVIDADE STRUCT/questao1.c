#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[10];
};

void preenche(struct funcionario *funcionario){

    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", funcionario->nome);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionario->salario);

    printf("Digite o identificador(id) do funcionario: ");
    scanf(" %d", &funcionario->identificador);

    printf("Digite o cargo do funcionario: ");
    scanf(" %[^\n]", funcionario->cargo);
}

void imprime(struct funcionario *funcionario){
    printf("Nome: %s\n", funcionario->nome);
    printf("Salario: %.2f\n", funcionario->salario);
    printf("Identificador: %d\n", funcionario->identificador);
    printf("Cargo: %s\n", funcionario->cargo);
}

void alteraSalario(struct funcionario *funcionario){
    printf("Digite o novo salario: ");
    scanf("%f", &funcionario->salario);
}

void maiorMenorSalario(struct funcionario *funcionario,  int n){
    int maior_salario  = funcionario[0].salario;
    int menor_salario = funcionario[0].salario;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 0; i < n; i++){
        if(funcionario[i].salario > maior_salario){
            maior_salario = funcionario[i].salario;
            posicao_maior = i;

        }
        else if(funcionario[i].salario < menor_salario){
            menor_salario = funcionario[i].salario;
            posicao_menor = i;
        }
    }

    printf(" Cargo do funcionario: %s\n "
    "Mairo salario: %.2f\n",funcionario[posicao_maior].cargo,funcionario[posicao_maior].salario);
    
    printf(" Cargo do funcionario: %s\n "
    "Menor salario: %.2f\n",funcionario[posicao_menor].cargo,funcionario[posicao_menor].salario);
    
}

int main(void){

    int quantidadeFuncionarios, opcaoAlterar;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quantidadeFuncionarios); 

   struct funcionario funcionario[quantidadeFuncionarios];

   for (int i = 0; i < quantidadeFuncionarios; i++){
        printf("Digite os dados do funcionario %d\n", i+1);
        preenche(&funcionario[i]);
   }

   for (int i = 0; i < quantidadeFuncionarios; i++){
        printf("Dados do funcionario %d\n", i +1);
        imprime(&funcionario[i]);
   }

   printf("VOCE DESEJA ALTERAR O VALOR DE ALGUM SALARIO (1- SIM, 2- NAO): ");
   scanf("%d",&opcaoAlterar);

   if(opcaoAlterar == 1){
        int funcionario_escolhido;
        printf("DIGITE O NUMERO DO FUNCIONARIO QUE DESEJA ALTERAR O SALARIO: ");
        scanf("%d",&funcionario_escolhido);

        alteraSalario(&funcionario[funcionario_escolhido-1]);
        printf("DADOS DO FUNCIONARIO %d\n",funcionario_escolhido);  
        imprime(&funcionario[funcionario_escolhido-1]);
   }
    maiorMenorSalario(funcionario, quantidadeFuncionarios);

    return 0;
}