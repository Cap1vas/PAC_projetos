#include <stdio.h>

int le_dados_residencia(int moradores){
    int num_comodos=0;
    int idade=0;
    int num_menores=0;
    int mais_velho=0;
    int num_residencias=0;
       printf("Quantos comodos tem essa casa?");
       scanf("%d", &num_comodos);
       for (int i = 0; i<moradores;i++){
            printf("Qual a idade do morador ");
            scanf("%d", &idade);
            if(mais_velho<idade){
                mais_velho = idade;
        }
       }
       mais_velho = idade;
       
        if (idade<18){
            num_menores++;
        }

    printf("Esse eh o mais velho %d \n",mais_velho);
    printf("Menores de idade eh %d\n",num_menores);
    return num_comodos;
}

int main(){
    int num_pessoas=0;
    int num_comodos=0;
    int idade=0;
    int residencias=0;
    int residencias_3mais=0;
    do
    {
       residencias++;
       printf("Quantas pessoas moram aq?");
       scanf("%d", &num_pessoas);
       num_comodos = le_dados_residencia(num_pessoas);
       if(num_comodos>3){
        residencias_3mais++;
       }
    } while (num_pessoas!=0);
    printf("Numero de casas com mais de 3 comodos %d\n",residencias_3mais);
    printf("Número de total de casas %d\n", residencias);
    return 0;
}