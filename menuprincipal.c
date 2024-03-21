#include <stdio.h>
int menu_principal(){
  int entrada;
  printf("1. Incluir \n2. Excluir\n3. Alterar\n4. Consultar\n5. Relatorio\n6. Fim\n");
  printf("Escolha uma opcao: ");
  scanf("%d",&entrada);
  while (entrada<1 || entrada>6){
    printf("Opcao nao encontrada, tente novamente\n");
    printf("Escolha uma opcao: ");
    scanf("%d",&entrada);
  }
  return entrada;
}

int main(){
  int op = menu_principal();
  printf("%d\n",op);
  return 0;
}