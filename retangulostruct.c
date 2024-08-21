#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct ponto{
    int Xesq,Yesq;
    int Xdir,Ydir;
};
struct retangulo{
    int area;
    float diagonal;
    int perimetro;
    struct ponto pontos;
};

int main(){
    struct retangulo r;
    int l1, l2;
    printf("Insira os pontos Xesq Yesq: ");
    scanf("%d%d", &r.pontos.Xesq,&r.pontos.Yesq);
    printf("Insira os pontos Xdir Ydir: ");
    scanf("%d%d", &r.pontos.Xdir,&r.pontos.Ydir);
    r.diagonal =sqrt(abs(pow(r.pontos.Xdir-r.pontos.Xesq,2)) + abs(pow(r.pontos.Ydir-r.pontos.Yesq,2)));
    l1 = r.pontos.Ydir - r.pontos.Yesq;
    l2 = r.pontos.Xdir- r.pontos.Xesq;
    r.area = abs((l1*l2));
    r.perimetro = (2*abs(l1)) + (2*abs(l2));

    printf(" A %d\n",r.area);
    printf("P %d\n",r.perimetro);
    printf("D %f",r.diagonal);
    return 0;
}