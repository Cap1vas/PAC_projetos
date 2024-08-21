#include <stdio.h> 
#include <math.h>

#define True 1
#define False 0
float verifica_quadrado_perfeito(float n){
    float verify;
    verify=pow(n,0.5);
    if(n==verify*verify){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    float num;
    printf("Insira um numero para verificacao");
    scanf("%f",&num);
    printf("%f",verifica_quadrado_perfeito(num));
    return 0;
}