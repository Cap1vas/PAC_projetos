#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct ponto{
    int x,y,x2,y2;
};

int main () {
    float distancia,norma,raiznorma;
    struct ponto cord;
    printf("Insira a pos X e Y: ");
    scanf("%d%d",&cord.x,&cord.y);
    printf("Insira a pos X2 e Y2: ");
    scanf("%d%d",&cord.x2,&cord.y2);
    norma = abs(pow(cord.x-cord.x2,2)) + abs(pow(cord.y-cord.y2,2));
    raiznorma = sqrt(norma);

    printf("Distancia eh %f",raiznorma);

    return 0;
}
