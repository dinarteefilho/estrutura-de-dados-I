#include <stdio.h>

int main (){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) +=
}

/* Os valores de x e y devem ser 4 e 1, respectivamente,
e o valor de p deve ser 0, pois p é um ponteiro apontado a y.*/