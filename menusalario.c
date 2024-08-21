#include <stdio.h> 

float prestador(){
    int qtd_serv;
    float valor_serv;
    float salario_final;
    printf("Qual o num de servico");
    scanf("%d",&qtd_serv);
    for(int i = 0; i<qtd_serv;i++){
        printf("Qual o valor do servico %d",i+1);
        scanf("%f",&valor_serv);
        salario_final = salario_final + valor_serv;
    }
    return salario_final;
}
float contratado(){
    float salario;
    printf("Insira o salario");
    scanf("%f", &salario);
    return salario;
}

float horista(){
    float valor_hora,qtd_horas;
    float salario;
    printf("Insira o valor da hora e a qtd de horas trabalhadas");
    scanf("%f%f",&valor_hora,&qtd_horas);
    salario = valor_hora * qtd_horas;
    return salario;
}


int menu(){
    int opcao;
    printf("\nSelecione a opcao que deseja.\n1-Horista\n2-Contratado\n3-Prestador de servico\n");
    scanf("%d", &opcao);
    return opcao;

}

int main(){
    for(int i= 0;i<50;i++){
        int opcao = menu();
        if(opcao == 1){
            printf("O salario eh: %.2f, para a pessoa %d",horista(), i+1);
    }
        if (opcao == 2){
            printf("O salario eh: %.2f, para a pessoa %d",contratado(),i+1);
    }
        if(opcao == 3){
            printf("O salario eh: %.2f, para a pessoa %d",prestador(),i+1);
    }
    }
    return 0;
}