#include <stdio.h>

int main(){
  int entrada;
  int i = 0;
  int aux = 0;

  printf("Insira um valor limite: ");
  scanf("%d", &entrada);
  if (entrada<0){
    printf("Esse numero nao eh positivo, encerrando programa.");
  }
  else{
    while (i<entrada){
      i++;
      aux = aux + i;

    }
  }
printf("%d", aux);

  return 0;
}