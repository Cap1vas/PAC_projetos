//Cria uma estrutura com as informações de um aluno em uma disciplina, recebe as info de 5 alunos e depois escreve as infos daquele com maior media
#include <stdio.h>
#include <string.h>

struct disciplina {
    int matricula;
    char nome[50];
    int p1, p2, p3;
};

int main() {
    struct disciplina al[5];
    int media[5] = {0};
    int maior = 0;

    for(int i = 0; i < 5; i++) {
        printf("Qual o nome do aluno na pos %d: ", i);
        fgets(al[i].nome, sizeof(al[i].nome), stdin);
        getchar();
        printf("\n");
        printf("Qual sua matricula? ");
        scanf("%d", &al[i].matricula);
        getchar();
        printf("\n");
        printf("Quais foram suas notas na p1, p2 e p3, respectivamente? ");
        scanf("%d%d%d", &al[i].p1, &al[i].p2, &al[i].p3);
        getchar();
    }

    for(int i = 0; i < 5; i++) {
        media[i] = (al[i].p1 + al[i].p2 + al[i].p3) / 3;
    }

    for(int i = 0; i < 5; i++) {
        if(maior < media[i]) {
            maior = media[i];
        }
    }

    printf("Alunos com maior media: \n");
    for(int i = 0; i < 5; i++) {
        if(media[i] == maior) {
            printf("Nome[%d]: %s", i, al[i].nome);
            printf("Matricula[%d]: %d\n", i, al[i].matricula);
            printf("Media[%d]: %d\n", i, media[i]);
        }
    }

    return 0;
}
