#include <stdio.h>

int main() {
    int quantidade, regiao;
    float preco_unitario = 5.0, total_sem_frete, frete, total_com_frete;


    printf("Digite a quantidade de itens (ate 100): ");
    scanf("%d", &quantidade);

 
    if (quantidade < 1 || quantidade > 100) {
        printf("Quantidade invalida. Tem que estar entre 1 e 100.\n");
        return 1; 
}

    printf("Digite o codigo da regiao (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);

 
    total_sem_frete = quantidade*preco_unitario;

    
    switch (regiao) {
        case 1: // Norte
            frete = total_sem_frete * 0.10;
            printf("Regiao: Norte\n");
            break;
        case 2: // Nordeste
            frete = total_sem_frete * 0.08;
            printf("Regiao: Nordeste\n");
            break;
        case 3: // Centro-Oeste
            frete = total_sem_frete * 0.12;
            printf("Regiao: Centro-Oeste\n");
            break;
        case 4: // Sudeste
            frete = total_sem_frete * 0.15;
            printf("Regiao: Sudeste\n");
            break;
        case 5: // Sul
            frete = total_sem_frete * 0.11;
            printf("Regiao: Sul\n");
            break;
        default:
            printf("Cadigo de regiao invalido.\n");
            return 1; 
    }

    total_com_frete = total_sem_frete + frete;

    printf("Total sem frete: R$%.2f\n", total_sem_frete);
    printf("Frete: R$%.2f\n", frete);
    printf("Total com frete: R$%.2f\n", total_com_frete);

    return 0;
}
