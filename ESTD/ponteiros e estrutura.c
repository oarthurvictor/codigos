#include <stdio.h>
#include <stdlib.h>

typedef struct horario{
    int hora;
    int minuto;
    int segundo;

}horario;

int main (){

horario agora, *ptr, depois;

ptr = &depois;

agora.hora=22;
agora.minuto=06;
agora.segundo=56;

ptr->hora=agora.hora+3;
ptr->minuto=agora.minuto-03;
ptr->segundo=agora.segundo/8;



printf("AGORA: %d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);
printf("DEPOIS: %d:%d:%d\n", depois.hora, depois.minuto, depois.segundo);
return 0;
}
