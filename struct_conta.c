#include <stdio.h>

struct Data{
    int dia;
    int mes;
    int ano;
};


struct struct_conta{
    int num_conta;
    char tipo_conta;
    char nome[80];
    float saldo;
    struct Data ultPAG;
}clienteNovo, clienteAntigo;


int main(){
    struct  struct_conta vcliente[100];

    int n, i;
    printf("Digite o numero de clientes: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nDigite o numero da conta:");
        scanf("%d", &vcliente[i].num_conta);

        printf("\nDigite o tipo da conta: ");
        fflush(stdin);
        scanf("%c", &vcliente[i].tipo_conta);

        printf("\nDigite o nome do cliente: ");
        fflush(stdin);
        scanf("%c", &vcliente[i].nome);

        printf("\nDigite o saldo da conta: ");
        fflush(stdin);
        scanf("%f", &vcliente[i].saldo);
    };
    

    printf("\nImprime dados dos clientes");
    printf("\nNro CtaTipo Cta Nome Cliente Saldo Cta");
        for (i=0; i<n; i++)
    {
    printf("\n%3d %c %s %.2f", vcliente[i].num_conta, vcliente[i].tipo_conta, vcliente[i].nome,
        vcliente[i].saldo);
    }
   return 0;
};