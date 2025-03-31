#include <stdio.h>

int main() {
    float polegadas, centimetros;
    int inicio, fim;

    printf("Digite o valor inicial do intervalo (em polegadas): ");
    scanf("%d", &inicio);
    printf("Digite o valor final do intervalo (em polegadas): ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("O valor inicial não pode ser maior que o valor final.\n");
        return 1;
    }

    printf("\nTabela de Conversão: Polegadas para Centímetros\n");
    printf("----\n");
    printf("Polegadas\tCentímetros\n");
    printf("----\n");
    for (int i = inicio; i <= fim; i++) {
        polegadas = (float)i;
        centimetros = polegadas * 2.54;
        printf("%d\t\t%.2f\n", i, centimetros);
    }

    return 0;
}
