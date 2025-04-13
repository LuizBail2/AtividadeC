#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char area[50];
    double valorAtual;
    double valorAnterior;
    double variacao;
} Acao;

// Função para preencher os campos da struct
void preencherAcao(Acao *acao) {
    printf("Digite o nome da companhia: ");
    scanf(" %[^\n]s", acao->nome);
    printf("Digite a área de atuação: ");
    scanf(" %[^\n]s", acao->area);
    printf("Digite o valor atual da ação: ");
    scanf("%lf", &acao->valorAtual);
    printf("Digite o valor anterior da ação: ");
    scanf("%lf", &acao->valorAnterior);

    // calculando a variação da ação em porcentagem
    acao->variacao = ((acao->valorAtual - acao->valorAnterior) / acao->valorAnterior) * 100;
}

// função para imprimir os campos da struct
void imprimirAcao(const Acao *acao) {
    printf("\n Informações da Ação \n");
    printf("Nome da companhia: %s\n", acao->nome);
    printf("Área de atuação: %s\n", acao->area);
    printf("Valor atual: R$ %.2lf\n", acao->valorAtual);
    printf("Valor anterior: R$ %.2lf\n", acao->valorAnterior);
    printf("Variação: %.2lf%%\n", acao->variacao);
}

int main() {
    Acao acoes[3]; //vetor com 3 estruturas
    for (int i = 0; i < 3; i++) {
        printf("\n Preenchendo a ação %d \n", i + 1);
        preencherAcao(&acoes[i]); // Passando por referência
    }

    printf("\nImprimindo as informações das ações\n");
    for (int i = 0; i < 3; i++) {
        imprimirAcao(&acoes[i]); // Passando por referência
    }

    return 0;
}