#include <stdio.h>

void existencia_tipo_triangulo(float a, float b, float c){
    
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("Eh possivel formar um triangulo!\n");
        if((a==b && a !=c)||(b==c && b != a)|| (a==c && a!=b)){
            printf("Eh isosceles!\n");
    }
        if(a==b && a==c && b==c){
            printf("Eh equilatero!\n");

    }
        if (a!=b && b!=c&& a!=c){
            printf("Eh escaleno\n");
    }
    }
    else{
        printf("Nao eh possivel formar um triangulo.\n");

    }
}

int main(){
    float a,b,c;
    printf("Insira o valor dos lados do triangulo: ");
    scanf("%f%f%f",&a,&b,&c);
    existencia_tipo_triangulo(a,b,c);
    return 0;
}