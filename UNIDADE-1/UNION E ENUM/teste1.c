#include <stdio.h>

// ESTRUTURA UNION
typedef union tipodados {
    int meu_int;
    float meu_float;
}Dados;

int main(void){
    Dados uniao;
    printf("Digite os dados: \t");
    scanf("%d %f", &uniao.meu_int, &uniao.meu_float);
    printf("Os Dados informados: meu_int = %d meu_float %f", uniao.meu_int, uniao.meu_float);
    return 0;
}