#include <stdio.h>
#include <math.h>
#define pi 3.1419
float volume_cilindro(float r, float h){
    return (r*r)*pi*h;
}
float volume_caixa(float a, float b,float c){
    return a*b*c;
}
float volume_caixa_furada(float volume_caixa, float volume_cilindro){
    return volume_caixa - volume_cilindro;
}
int main(){
    float a,b,c,r,h;
    float resultado_caixa, resultado_cil,volume_final;
    printf("Valores");
    scanf("%f%f%f",&a,&b,&c);
    printf("Valores cil");
    scanf("%f%f",&r,&h);
    resultado_caixa = volume_caixa(a,b,c);
    resultado_cil= volume_cilindro(r,h);
    volume_final= volume_caixa_furada(resultado_caixa,resultado_cil);
    printf("Eh %f",volume_final);
    return 0;
}