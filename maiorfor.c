#include <stdio.h>

int main(){
  int entrada;
  int maior=entrada;
  printf("Entre com 10 numeros e irei veriicar qual o maior: ");

  for(int i=0;i<10;i++){
    printf("Pos %d: ",i);
    scanf("%d",&entrada);
    if(i==0 || entrada> maior){
      maior = entrada;
    }

  }
  printf("%d",maior);
  return 0;
}


 