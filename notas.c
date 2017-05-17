#include <stdio.h>

/*
   

*/

enum Status {REPF, REP, REPN, REC, APR, APRN, REMF, RENF};

typedef struct {
    int matricula;
    char nome[80];
    int faltas;
    float notas[3];
    float reposicao;
    enum Status situacao;
} Aluno;

typedef struct
{
    char nome[80];
    int totalAulas;
    int    totalAlunos;
    Aluno *alunos;
} Turma;

float calculaMediaAluno (Aluno* registro)
{

}

void atualizaSituacao (Aluno* registro, int TotalAulas)
{

}

const char * imprimeSituacao (Aluno* registro)
{

}

void listaTurma ()
{

}

int main ()
{
    /* Código */

    return 0;
}
