#include <stdio.h>

typdef struct {
    char nome[80];
    char situacao[20];
    float saldo;
}conta;

void recebe_valor(conta *cliente){
    printf("");
    fgets(cliente->nome, 80, stdin);
    cliente->nome
}