#include <stdio.h>

int Soma(int n){;
   if (n == 0)
    return 0;
   else
   return n + Soma(n-1);
}

int main(){
    int n = 4;
    printf("%d",Soma(n));
    return 0;
}