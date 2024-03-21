#include <stdio.h>

int calcular_MDC(int a, int b){
  int mdc,conta;
  while (1){
    conta = a%b;
    if(conta == 0){
      mdc = b;
      printf("%d",mdc);
      break;
    }
    else{
      a = b;
      b = conta;
    }
  }
  printf("MDC eh: %d",mdc);
  return mdc;

}
int main(){
  int a,b;
  printf("Coloque A: ");
  scanf("%d",&a);
  printf("Coloque B: ");
  scanf("%d",&b);
  calcular_MDC(a,b);

  return 0;
}