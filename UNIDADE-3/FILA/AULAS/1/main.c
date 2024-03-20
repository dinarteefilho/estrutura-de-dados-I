#include "circular.c"

int main() {

    Fila *Q = CriaFila(50);

    InsereFila(Q, 10);

    ImprimirFila(Q);

    int elem;
    ConsultaFila(Q, &elem);

    int vazia = FilaVazia(Q);

    int cheia = FilaCheia(Q);

    RemoveFila(Q);

    DestruirFila(&Q);

    return 0;
}