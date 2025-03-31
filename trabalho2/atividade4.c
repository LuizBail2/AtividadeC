#include <stdio.h>

float f(float a1, float r, float t) {
    if (t <= 1) {
        return a1; 
    } else {
        return r * f(a1, r, t - 1); 
    }
}

int main() {
    float a1, r, t;

    printf("Digite o valor de a1 (primeiro termo): ");
    scanf("%f", &a1);
    printf("Digite o valor de r (razão): ");
    scanf("%f", &r);
    printf("Digite o valor de t (número de termos): ");
    scanf("%f", &t);

    printf("O resultado de f(%.2f, %.2f, %.2f) é: %.2f\n", a1, r, t, f(a1, r, t));

    return 0;
}