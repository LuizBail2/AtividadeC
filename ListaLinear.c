#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define max 30
#define inv -1

typedef int TipoChave;

typedef struct {
    TipoChave chave;
} Registro;

typedef struct {
    Registro V[max];
    int N;
} Lista;

void Iniciar_Lista(Lista *L) {
    L->N = 0;  
}

int Tamanho(Lista *L) {
    return L->N;
}

void Imprimir_Lista(Lista *L) {
    int i;
    for (i = 0; i < L->N; i++)  
        printf(" %d", L->V[i].chave);
}

int Busca_Sequencial(Lista *L, TipoChave ch) {  
    int i = 0;
    while (i < L->N) {
        if (ch == L->V[i].chave)
            return i;
        else
            i++;
    }
    return inv;
}

bool Inserir_Elemento_Lista(Lista *L, Registro r, int i) {
    int j;
    if ((L->N == max) || (i < 0) || (i > L->N))  
        return false;

    for (j = L->N; j > i; j--)
        L->V[j] = L->V[j - 1];  
    L->V[i] = r;
    L->N++;
    return true;
}

bool Excluir_Elemento_Lista(TipoChave ch, Lista *L) {
    int j, pos;
    pos = Busca_Sequencial(L, ch);
    if (pos == inv)
        return false;

    for (j = pos; j < L->N - 1; j++)
        L->V[j] = L->V[j + 1];

    L->N--;
    return true;
}

void Reiniciar_Lista(Lista *L){
    L->N=0;
}

int Main(){
    Lista L;
    Iniciar_Lista (&L)
    Tamanho (&L)
    Imprimir_Lista()
    Busca_Sequencial()
    Inserir_Elemento_Lista()
    Excluir_Elemento_Lista()

    

}