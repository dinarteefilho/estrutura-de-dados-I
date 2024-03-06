/* DEFININDO UM NOVO TIPO PARA A ESTRUTURA ALUNO */
typedef struct aluno Aluno;

/*FUNÇÃO PARA ALOCAR MEMÓRIA PARA A ESTRUTURA ALUNO
E RECEBE DADOS VIA TECLADO E RETORNA UM PONTEIRO PARA ALUNO*/
Aluno * recebe_dados(void);

/*FUNÇÃO PARA IMPRIMIR OS DADOS DO ALUNO*/
void imprimir_dados (Aluno * aluno);

/*FUNÇÃO PARA MATRICULAR N ALUNOS*/
void matricula (Aluno * aluno);

/*FUNÇÃO PARA LIBERAR A MEMÓRIA ALOCADA*/
void libera_memoria (Aluno * aluno);