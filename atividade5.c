#include <stdio.h>
#include <string.h>

int main() {
    char estadoCivil[20];
    char nomeConjude[50], sexo[10], cidade[50];
    int idade, quantidadeFilhos, idadeMaisVelho;
    float salario;

    printf("Informe sua situação civil (Solteiro, Casado, Divorciado, Viuvo): ");
    scanf("%s", estadoCivil);

    if (strcmp(estadoCivil, "Solteiro") == 0) {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("Você informou que é Solteiro(a) e tem %d anos.\n", idade);
    } 
    else if (strcmp(estadoCivil, "Casado") == 0) {
        printf("Informe seu sexo: ");
        scanf("%s", sexo);
        printf("Informe o nome do seu conjude: ");
        scanf("%s", nomeConjude);
        printf("Você informou que é Casado(a), de sexo %s e o nome do seu conjude é %s.\n", sexo, nomeConjude);
    } 
    else if (strcmp(estadoCivil, "Divorciado") == 0) {
        printf("Informe a quantidade de filhos (0 caso não possua): ");
        scanf("%d", &quantidadeFilhos);
        if (quantidadeFilhos > 0) {
            printf("Informe a idade do filho mais velho: ");
            scanf("%d", &idadeMaisVelho);
            printf("Você informou que é Divorciado(a), tem %d filho(s) e o mais velho tem %d anos.\n", quantidadeFilhos, idadeMaisVelho);
        } else {
            printf("Você informou que é Divorciado(a) e não tem filhos.\n");
        }
    } 
    else if (strcmp(estadoCivil, "Viúvo") == 0) {
        printf("Informe a cidade onde vive: ");
        scanf("%s", cidade);
        printf("Informe seu salário atual: ");
        scanf("%f", &salario);
        printf("Você informou que é Viúvo(a), vive na cidade de %s e tem um salário de %.2f.\n", cidade, salario);
    } 
    else {
        printf("Situação civil inválida.\n");
    }

    return 0;
}