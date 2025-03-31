#include <stdio.h>
int u(int);

int u(int n){
    if (n > 1)
        return 2 * u (n-1) - 3 * u(n -2);
else 
   return 1;
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", u(n));
    return 0;
}