#include <stdio.h>

float perifericos(int qtd){
    int i =0;
    float valor_periferico = 0;
    float periferico;
    for(i=0;i<qtd;i++){
        printf("Qual o preço do periférico?");
        scanf("%f",&periferico);
        valor_periferico = valor_periferico + periferico;
    }
    printf("O valor a ser pago é de: %f\n",valor_periferico);
    return valor_periferico;
}

int main(){
    int codigo;
    int qtd;
    float valor_pc;
    int vendas_com_perifericos=0;
    int vendas_sem_perifericos=0;
    float valor_total_vendas = 0;

    do
    {
        printf("Qual o codigo do produto?");
        scanf("%d", &codigo);
        
        if(codigo == 0)
            break;
        
        printf("Qual o valor do modelo?");
        scanf("%f",&valor_pc);
        
        printf("Qual a quantidade de perifericos?");
        scanf("%d",&qtd);
        
        if(qtd == 0){
            vendas_sem_perifericos++;
        }
        else{
            vendas_com_perifericos++;
            valor_total_vendas += valor_pc + perifericos(qtd);
        }

    } while (codigo != 0);

    printf("Quantidade de vendas sem periféricos: %d\n", vendas_sem_perifericos);
    
    if(vendas_com_perifericos + vendas_sem_perifericos > 0)
        printf("Valor médio das vendas: %f\n", valor_total_vendas / (vendas_com_perifericos + vendas_sem_perifericos));

    return 0;
}
