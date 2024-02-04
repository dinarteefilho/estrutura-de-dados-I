#include <stdio.h>

int main(void) {
 int a, b, c, d; // declarando váriaveis
 int *p1; // ponteiro 1 para inteiros
 int *p2 = &a; // o ponteiro p2 aponta para o endereço A
 int *p3 = &c; // o ponteiro p3 aponta para o endereço C
 p1 = p2; // o ponteiro p1 aponta para o endereço de p2
 *p2 = 10; // atribuindo 10 ao endereço A
 b = 20; // atribuindo 20 a B
 int **pp; // ponteiro para outro ponteiro
 pp = &p1; // o ponteiro pp aponta para o endereço de p1
 *p3 = **pp; // p3 recebe o valor de p1 que é 10, pois pp está apontando para p1
 int *p4 = &d; // o ponteiro p4 aponta para o endereço D
 *p4 = b + (*p1)++; // p4 recebe o valor de b + 10
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}