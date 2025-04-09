#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DISCIPLINAS 10
#define MAX_ALUNOS_TURMA 30

typedef struct Disciplina {
    char nome[50];
    char codigo[10];
} Disciplina;

typedef struct Aluno {
    char nome[100];
    int matricula;
    Disciplina disciplinas[MAX_DISCIPLINAS];
    int qtd_disciplinas;
    struct Aluno *prox;
} Aluno;

typedef struct Turma {
    char nome[10];
    Aluno *alunos;
    struct Turma *prox;
} Turma;

Turma *criarTurma(char nome[]) {
    Turma *novaTurma = (Turma *)malloc(sizeof(Turma));
    strcpy(novaTurma->nome, nome);
    novaTurma->alunos = NULL;
    novaTurma->prox = NULL;
    return novaTurma;
}

Aluno *criarAluno(char nome[], int matricula) {
    Aluno *novoAluno = (Aluno *)malloc(sizeof(Aluno));
    strcpy(novoAluno->nome, nome);
    novoAluno->matricula = matricula;
    novoAluno->qtd_disciplinas = 0;
    novoAluno->prox = NULL;
    return novoAluno;
}

void adicionarDisciplina(Aluno *aluno, char nomeDisciplina[], char codigo[]) {
    if (aluno->qtd_disciplinas < MAX_DISCIPLINAS) {
        strcpy(aluno->disciplinas[aluno->qtd_disciplinas].nome, nomeDisciplina);
        strcpy(aluno->disciplinas[aluno->qtd_disciplinas].codigo, codigo);
        aluno->qtd_disciplinas++;
    } else {
        printf("Número máximo de disciplinas atingido para o aluno %s.\n", aluno->nome);
    }
}

void imprimirPorTurma(Turma *turma) {
    Aluno *aux = turma->alunos;
    printf("Alunos da turma %s:\n", turma->nome);
    while (aux != NULL) {
        printf("Matricula: %d, Nome: %s\n", aux->matricula, aux->nome);
        aux = aux->prox;
    }
}

void imprimirTodosAlunos(Turma *turma) {
    Turma *auxTurma = turma;
    while (auxTurma != NULL) {
        imprimirPorTurma(auxTurma);
        auxTurma = auxTurma->prox;
    }
}

void buscarPorDisciplina(Turma *turma, char nomeDisciplina[]) {
    Turma *auxTurma = turma;
    while (auxTurma != NULL) {
        Aluno *auxAluno = auxTurma->alunos;
        while (auxAluno != NULL) {
            for (int i = 0; i < auxAluno->qtd_disciplinas; i++) {
                if (strcmp(auxAluno->disciplinas[i].nome, nomeDisciplina) == 0) {
                    printf("Nome: %s, Matricula: %d, Turma: %s\n", auxAluno->nome, auxAluno->matricula, auxTurma->nome);
                }
            }
            auxAluno = auxAluno->prox;
        }
        auxTurma = auxTurma->prox;
    }
}

int main() {
    Turma *turmaA = criarTurma("Turma A");
    Aluno *aluno1 = criarAluno("Carlos Silva", 12345);
    Aluno *aluno2 = criarAluno("Ana Santos", 67890);

    turmaA->alunos = aluno1;
    aluno1->prox = aluno2;

    adicionarDisciplina(aluno1, "Calculo", "MAT101");
    adicionarDisciplina(aluno2, "Calculo", "MAT101");
    adicionarDisciplina(aluno1, "Fisica", "FIS102");

    imprimirPorTurma(turmaA);
    printf("\nBusca por disciplina 'Calculo':\n");
    buscarPorDisciplina(turmaA, "Calculo");

    return 0;
}