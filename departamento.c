#include <stdio.h>
float departamento_info(int codigo, int qtd_funncionario){
    int mat_funcionario;
    float salario_funcionario;
    float soma_depart=0;
    
}
int main(){
    int codigo_depart,qtd_funcionario;
    float soma_salario_geral;
    for(int i=0;i<30;i++){
        printf("Codigo");
        scanf("%d",&codigo_depart);
        printf("qtd funcionario");
        scanf("%d",&qtd_funcionario);
        soma_salario_geral = soma_salario_geral + departamento_info(codigo_depart,qtd_funcionario);
    }
    printf("O salario geral eh: %.2f",soma_salario_geral);
    return 0;
}