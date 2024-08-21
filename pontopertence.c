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
int info_retangulo(struct retangulo r){
    int l1, l2;
    r.diagonal =sqrt(abs(pow(r.pontos.Xdir-r.pontos.Xesq,2)) + abs(pow(r.pontos.Ydir-r.pontos.Yesq,2)));
    l1 = r.pontos.Ydir - r.pontos.Yesq;
    l2 = r.pontos.Xdir- r.pontos.Xesq;
    r.area = abs((l1*l2));
    r.perimetro = (2*abs(l1)) + (2*abs(l2));
    printf("A %d\n",r.area);
    printf("P %d\n",r.perimetro);
    printf("D %f",r.diagonal);
    return 0;
    }

int main(){
    int x3,y3;
    struct retangulo r;
    printf("Insira os pontos Xesq Yesq: ");
    scanf("%d%d", &r.pontos.Xesq,&r.pontos.Yesq);
    printf("Insira os pontos Xdir Ydir: ");
    scanf("%d%d", &r.pontos.Xdir,&r.pontos.Ydir);
    printf("Informe um terceiro ponto para saber sua localizacao: ");
    scanf("%d%d",&x3,&y3);
    if (x3 >= r.pontos.Xesq && x3 <= r.pontos.Xdir && y3 >= r.pontos.Yesq && y3 <= r.pontos.Ydir) {
    printf("O ponto está dentro\n");
    info_retangulo(r);
    } 
    else {
        printf("O ponto está fora\n");
    }

    return 0;
}