#include <stdio.h>

int main (void){
    int x, y; // váriaveis declaras
    y = 2; // atribuindo 2 a y
    int *p1, *p2; // declarando dois ponteiros, p1 e p2
    p1 = &y; // o ponteiro p1 aponta para o endereço de y
    x = 1; // atribuindo 1 a x
    p2 = p1; // o ponteiro p2 aponta para o endereço de y
    (*p1)++; // incrementando o valor de y
    printf("%d %d", x, y); // imprimindo x e y
}