#include <stdio.h>
int divisor_comum(int a, int b){
    int menor;
    int maior_div=1;
    menor = a;
    if(menor<b){
        menor = b;
    }
    int i = 0;
    while(i<menor){
        i++;
        if(a%i==0 && b%i==0){
            printf("Os divisores sao: %d\n",i);
            maior_div = i;
            if(maior_div>i){
                maior_div = i;
            }
        }

    }
    printf("O maior div eh %d",maior_div);
}
int main(){

    int a,b;
    printf("Insira dois numeros\n");
    scanf("%d %d",&a,&b);
    divisor_comum(a,b);
    return 0;
}