#include <stdio.h>
#include <string.h>

int main() {
    char nome[20][50], sexo[20];
    int idade[20];

    printf("Informe os dados de 20 pessoas:\n");
    for (int i = 0; i < 20; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo[i]);
    }

    printf("\nPessoas do sexo masculino com mais de 21 anos:\n");
    for (int i = 0; i < 20; i++) {
        if (sexo[i] == 'M' || sexo[i] == 'm') {
            if (idade[i] > 21) {
                printf("%s\n", nome[i]);
            }
        }
    }

    return 0;
}