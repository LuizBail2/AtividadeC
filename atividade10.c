#include <stdio.h>

int main() {
    int n, numero, maior;

    printf("Quantos números você deseja fornecer? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade de números deve ser maior que zero.\n");
        return 1;
    }

    printf("Digite os números:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);
        if (i == 0 || numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}