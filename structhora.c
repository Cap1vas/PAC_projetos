#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(){
    int maiorhrs;
    int maiormin;
    int maiorsec;
    struct horario h[5];
    for(int i=0;i<5;i++){
        printf("Horas ");
        scanf("%d", &h[i].horas);
        printf("Minutos ");
        scanf("%d", &h[i].minutos);
        printf("Segundos ");
        scanf("%d", &h[i].segundos);

    }
    for (int i =0;i<5;i++){
        maiorhrs = h[0].horas;
        if (maiorhrs<h[i].horas){
            maiorhrs = h[i].horas;
        }
         maiormin = h[0].minutos;
        if (maiormin<h[i].minutos){
            maiormin = h[i].minutos;
        }
         maiorsec = h[0].segundos;
        if (maiorsec<h[i].segundos){
            maiorsec = h[i].segundos;
        }
    }
    printf("O horario eh %d:%d:%d",maiorhrs,maiormin,maiorsec);
    
    return 0;
}