#include <stdio.h>
int v(int);

int v(int n){
if (n > 1)
if (n == 0 || n == 1);

else if (n > 1 && n % 2 == 0);
    return 2 * v (n-1) -v(n -2);
else 
    return v(n - 1) - 2 * v(n - 2);
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", v(n));
    return 0;
}