#include<stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

struct horario teste (struct horario x){
        printf("%d:%d:%d\n", x.horas, x.minutos, x.segundos);
        x.horas = 100;
        x.minutos = 100;
        x.segundos = 100;
    return x;
    };

int main(){
    struct horario agora;
    agora.horas = 17;
    agora.minutos = 17;
    agora.segundos = 43;

    struct horario proxima;
    proxima=teste(agora);
    printf("%d:%d:%d\n", proxima.horas, proxima.minutos, proxima.segundos);
return 0;
}
