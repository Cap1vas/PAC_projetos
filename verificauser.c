#include <stdio.h>

int main() {
    int matverified[3] = {7892457, 5425376, 2736252};
    int senhaverified[3] = {123321, 812837, 273625};
    char *user[3] = {"Anakin Skywalker", "Leia Organa", "Luke Skywalker"};
    int matricula, senha;
    //posiccao da matricula quando nao foi encotrada uma valida
    int posicao_matricula = -1;

    for (int i = 0; i < 3; i++) {
        printf("Insira uma matricula contendo 7 numeros: \n");
        scanf("%d", &matricula);
        printf("Insira uma senha contendo 6 numeros: \n");
        scanf("%d", &senha);
        //verificacao das credenciais
        for (int j = 0; j < 3; j++) {
            if (matricula == matverified[j] && senha == senhaverified[j]) {
                posicao_matricula = j;
                break;
            }
        }
        //caso a posicao seja encontrada, substitui o valor de posicao_matricula para o valor daquela credencial dentro do vetor
        if (posicao_matricula != -1) { 
            printf("Bem-vindo, %s! Acesso concedido.\n", user[posicao_matricula]);
            break;
        } else { 
            printf("Credenciais incorretas, tente novamente.\n");
            printf("Tentativas restantes: %d\n", 2 - i); 
        }
    }
    //caso a matricula nao seja encontrada esse valor sera mantido e entendido como usuario nao validado
    if (posicao_matricula == -1) {
        printf("Número máximo de tentativas atingido. Acesso negado.\n");
    }

    return 0;
}
