#include <stdio.h>
#include <string.h>

int qtdTotalTransfer[20] = {0};
int qtdTotalRecebida[20] = {0};
int qtdPendente[20] = {0};

struct produtos
{
    int idProduto;
    char nome[20];
    int quantidadeProduto;
};

void leDadosProdutos(struct produtos p[20])
{
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o id do produto %d: ", i + 1);
        scanf("%d", &p[i].idProduto);
        printf("Digite o nome do produto");
        scanf("%s", p[i].nome);
        printf("Digite a quantidade do produto");
        scanf("%d", &p[i].quantidadeProduto);
    }
}

void geraSaida(struct produtos p[20])
{
    for (int i = 0; i < 20; i++)
    {
        printf("ID: %d\n", p[i].idProduto);
        printf("Nome: %s\n", p[i].nome);
        printf("Quantidade: %d\n", p[i].quantidadeProduto);
        printf("Qtd Solicitada: %d\n", qtdTotalTransfer[i]);
        printf("Qtd Recebida: %d\n", qtdTotalRecebida[i]);
        printf("Qtd Pendente: %d\n", qtdPendente[i]);
        printf("Qtd Atual: %d", p[i].quantidadeProduto);
    }
}

void movimentos(struct produtos p[20])
{
    int op;
    char opEscolhida;
    int qtdTransfer;
    int qtdRecebida;

    while (1)
    {
        printf("Sobre qual produto deseja realizar uma operação? (0 para sair)");
        scanf("%d", &op);
        if (op == 0)
        {
            break;
        }
        for (int i = 0; i < 20; i++)
        {
            if (op == p[i].idProduto)
            {
                printf("Qual operação deseja fazer?(s/d)");
                scanf(" %c", &opEscolhida);
                if (opEscolhida == 's')
                {
                    printf("Quantidade a ser transferida: ");
                    scanf("%d", &qtdTransfer);
                    p[i].quantidadeProduto = p[i].quantidadeProduto - qtdTransfer;
                    qtdTotalTransfer[i] = qtdTotalTransfer[i] + qtdTransfer;
                    if (p[i].quantidadeProduto < 0)
                    {
                        qtdPendente[i] = qtdPendente[i] + p[i].quantidadeProduto;
                    }
                }
                else if (opEscolhida == 'd')
                {
                    printf("Quantidade a ser devolvida: ");
                    scanf("%d", &qtdRecebida);
                    p[i].quantidadeProduto = p[i].quantidadeProduto - qtdRecebida;
                    qtdTotalRecebida[i] = qtdTotalRecebida[i] + qtdRecebida;
                }
            }
        }
    }
}

int main()
{
    struct produtos p[20];
    leDadosProdutos(p);
    movimentos(p);
    geraSaida(p);

    int produtosZerados = 0;
    for (int i = 0; i < 20; i++)
    {
        if (p[i].quantidadeProduto == 0)
        {
            produtosZerados++;
        }
    }
    printf("Quantidade de produtos com estoque zerado: %d\n", produtosZerados);
////
    return 0;
}