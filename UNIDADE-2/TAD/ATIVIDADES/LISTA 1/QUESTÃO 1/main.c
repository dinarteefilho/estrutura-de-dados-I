#include "contabancaria.c"

int main()
{
    // Cria uma conta bancaria
    ContaBancaria *conta1 = criaconta("Dinarte Filho", 1, 5000.0);
    printf("Conta criada: Titular: %s, Numero: %d, Saldo: %.2f\n", conta1->titular, conta1->numero, conta1->saldo);

    // Realiza um deposito
    deposita(conta1, 600.0);

    // Cria uma segunda conta bancaria
    ContaBancaria *conta2 = criaconta("Dinarte Rodrigues", 2, 3000.0);
    printf("Conta criada: Titular: %s, Numero: %d, Saldo: %.2f\n", conta2->titular, conta2->numero, conta2->saldo);

    // Realiza uma transferencia entre as contas criadas
    transfere(conta1, conta2, 300.0);

    // Verifica o saldo das contas criadas
    printf("Saldo da conta 1: %.2f\n", saldo(conta1));
    printf("Saldo da conta 2: %.2f\n", saldo(conta2));

    // Exclui uma conta
    excluiconta(conta1);

    return 0;
}