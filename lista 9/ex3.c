#include <stdio.h>

struct al
{
    char nome[30];
    float p1, p2;
};

void exibe(struct al a[20], float media)
{
    float mediaAluno;
    for (int i = 0; i < 20; i++)
    {
        printf("Nome do aluno %d, %s", i + 1, a[i].nome);
        printf("Nota 1 do aluno %d, %.2f", i + 1, a[i].nome);
        printf("Nota 2 do aluno %d, %.2f", i + 1, a[i].nome);
        mediaAluno = (a[i].p1 + a[i].p2) / 2;

        if (mediaAluno > media)
        {
            printf("Aluno aprovado\n");
        }
        else if (mediaAluno == media)
        {
            printf("Aluno Aprovado no limite\n");
        }
        else
        {
            printf("Aluno reprovado\n");
        }
    }
}

int main()
{
    struct al a[20];
    float media = 0;
    float mediaFinal = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Insira o nome do aluno");
        scanf("%s", a[i].nome);
        printf("nota 1 e nota 2");
        scanf("%f %f", &a[i].p1, &a[i].p2);
        media = (media + (a[i].p1 + a[i].p2));
    }
    mediaFinal = media / 20;
    exibe(a, mediaFinal);

    return 0;
}