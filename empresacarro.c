#include <stdio.h> 

int maisque1000(int carros_diferentes){
    int qtd_estoque_1000mais=0;
    int codigo;
    int qtd_estoque;
    for(int i=0;i<carros_diferentes;i++){
        printf("Qual o codigo do modelo na pos %d\n",i);
        scanf("%d",&codigo);
        printf("Qual a quantidade em estoque?");
        scanf("%d",&qtd_estoque);
        if(qtd_estoque>1000){
            qtd_estoque_1000mais++;
        }
    }
    return qtd_estoque_1000mais;
}

int main(){
    int carros_diferentes;
    int resultado;
    printf("Quantos carros diferentes essa empresa faz? ");
    scanf("%d",&carros_diferentes);
    resultado = maisque1000(carros_diferentes);
    printf("%d",resultado);
    return 0;
}