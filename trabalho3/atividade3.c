#include <stdio.h>

int v(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else if (n % 2 == 0) {
        return 2 * v(n - 1) - v(n - 2);
    } else {
        return v(n - 1) - 2 * v(n - 2); 
    }
}

int main() {
    int n;

    printf("Digite o valor de n para calcular v(n): ");
    scanf("%d", &n);

    printf("v(%d) = %d\n", n, v(n));

    return 0;
}