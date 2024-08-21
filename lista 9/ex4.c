#include <stdio.h>
#include <string.h>

struct produtos
{
    char nomeProduto[30];
    float preco;
    int quantidadeProduto;
};

char consultas(struct produtos p[])
{
    int aux = 0;
    char pesquisas[30][30];
    while (!aux)
    {
        for (int i = 0; i < 30; i++)
        {
            printf("Qual o nome do produto a ser consultado?");
            scanf("%s", pesquisas[i]);
            if (strcmp(p[i].nomeProduto, "Fim") == 0)
            {
                break;
            }
            else if (strcmp(p[i].nomeProduto, pesquisas[i]) == 0)
            {
                printf("Produto encontrado!\n");
                printf("%d", p[i].quantidadeProduto);
                printf("%f", p[i].preco);
            }
            else if (strcmp(p[i].nomeProduto, pesquisas[i]) != 0)
            {
                printf("Produto nao encontrado!");
            }
        }
    }
}

int cadastro(struct produtos p[])
{
    int produtosCadastrados = 0;
    for (int i = 0; i < 30; i++)
    {
        printf("Qual o nome do produto a ser cadastrado?");
        scanf("%s", p[i].nomeProduto);
        if (strcmp(p[i].nomeProduto, "Fim") == 0)
        {
            break;
        }
        else
        {
            printf("Qual a quantidade desse produto em estoque?");
            scanf("%d", &p[i].quantidadeProduto);
            printf("Qual o preco do produto?");
            scanf("%f", &p[i].preco);
            produtosCadastrados++;
        }
    }
    return produtosCadastrados;
}

int main()
{
    char opcao;
    struct produtos p[30];
    cadastro(p);
    printf("Deseja consultar a base de dados? (s/n)");
    scanf("% c", &opcao);
    if (opcao == 's')
    {
        consultas(p);
    }
    else if (opcao == 'n')
    {
        return 0;
    }

    return 0;
}