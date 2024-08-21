#include <stdio.h>

struct cadastro{
    char nome[100];
    int idade;
    int endereco;
};


int main(){
    struct cadastro c;
    printf("Escreva o seu nome: ");
    gets(c.nome);
    printf("Sua idade: ");
    scanf("%d",&c.idade);
    printf("Qual seu endereco? ");
    scanf("%d",&c.endereco);
    fputs(c.nome,stdout);
    printf("\n");
    printf("%d\n",c.idade);
    printf("%d",c.endereco);
    return 0;
}