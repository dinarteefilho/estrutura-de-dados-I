#include <stdio.h>

int main (){
    int x, *p;
    x = 100;
    p = &x;
    printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}

/* A - emite uma mensagem de advertência
B - a messagem será exibida porque o ponteiro não está sendo apontado
para nenhum endereço, precisa do & antes do x, exemplo: p = &x;, linha de código 6. 
C - Não, porque o ponteiro não está sendo apontado para nenhum endereço.
D - o código acima já está da maneira correta, adicionei o & antes do x, linha de código 6.
E - Sim, pois agora o ponteiro está sendo apontado para o endereço de x*/