#include <stdio.h>
#include <ctype.h> 

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    
    letra = tolower(letra);

 
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra é uma vogal.\n");
    } else if ((letra >= 'a' && letra <= 'z')) {
        printf("A letra é uma consoante.\n");
    } else {
        printf("O caractere não é uma letra .\n");
    }
    return 0;
}


