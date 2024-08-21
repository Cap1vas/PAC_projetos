#include <stdio.h> 
#include <math.h>

#define True 1
#define False 0
int verifica_quadrado_perfeito(int n){
    int verify;
    verify=pow(n,0.5);
    if(n==verify*verify){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Insira um numero para verificacao");
    scanf("%d",&num);
    printf("%d",verifica_quadrado_perfeito(num));
    return 0;
}