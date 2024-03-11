#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct disciplina Disciplina;

Disciplina* cria_disciplina(char nome[], int codigo);
void exclui_disciplina(Disciplina* disciplina);