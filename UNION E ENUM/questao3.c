#include <stdio.h>

// DEFININDO UMA ENUM PARA REPRESENTAR OS MESES
enum Mes {
    JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
};

// DEFININDO UMA ESTRUTURA PARA A DATA
struct Data {
    int dia;
    enum Mes mes;
    int ano;
};

int main() {
    // DECLARANDO UMA ESTRUTURA PARA LER A DATA
    struct Data data;
    printf("Digite o dia, mes e ano (separados por espacos): ");
    scanf("%d %d %d", &data.dia, (int*)&data.mes, &data.ano);

    // IMPRIMINDO A DATA NO FORMATO SOLICITADO

    printf("Data: %02d/%02d/%04d\n", data.dia, data.mes, data.ano); 
    // O USO DO 02 ENTRE %d, SIGNIFICA A QUANTIDADE DE DIGITOS A SEREM IMPRIMIDOS
    // O USO DO 04 ENTRE %d, SIGNIFICA A QUANTIDADE DE DIGITOS A SEREM IMPRIMIDOS

    return 0;
}