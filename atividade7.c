#include <stdio.h>

int main() {
    float numeros[10], metade[10], soma = 0, media;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        metade[i] = numeros[i] / 2; 
        soma += numeros[i]; 
    }

    media = soma / 10;

    printf("\nMetade de cada número:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: %.2f\n", i + 1, metade[i]);
    }
    printf("\nMédia dos números: %.2f\n", media);

    return 0;
}