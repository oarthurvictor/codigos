#include <stdio.h>

int main (){

struct horario{
    int *pHora;
    int *pMinuto;
    int *pSegundo;
};

struct horario hoje;

int hora = 18;
int minuto = 42;
int segundo = 52;

hoje.pHora = &hora;
hoje.pMinuto = &minuto;
hoje.pSegundo = &segundo;

printf("Hora - %d\n", *hoje.pHora);
printf("Minuto - %d \n", *hoje.pMinuto);
printf("Segundo - %d\n", *hoje.pSegundo);

getchar ();
return 0;
}
