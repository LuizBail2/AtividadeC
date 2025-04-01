#include <stdio.h>

int main() {
    printf("Multiplos de 5 no intervalo de 1 a 500:\n");
    for (int i = 1; i <= 500; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}