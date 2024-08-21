#include <stdio.h>
#include <math.h>
struct ponto{
    int x,y;
};

int main () {
    float distancia,norma,raiznorma;
    struct ponto cord;
    printf("Insira a pos X e Y: ");
    scanf("%d%d",&cord.x,&cord.y);
    norma = pow(cord.x,2) + pow(cord.y,2);
    raiznorma = sqrt(norma);

    printf("Distancia eh %f",raiznorma);

    return 0;
}
