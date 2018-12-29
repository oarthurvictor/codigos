#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora;
    int minuto;
    int segundo;

};

void lerHorario(struct horario lista[5]){
    int i;
    for (i=0;i<5;i++){
    printf("Digite o %d horario(hh:mm:ss): \n", i+1);
    scanf("%d:%d:%d", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
    }
}

void mostrarHorarios(struct horario lista[5]){
    int i;
    for (i=0;i<5;i++){
    printf("o %d horario eh: %d:%d:%d\n", i+1, lista[i].hora, lista[i].minuto, lista[i].segundo);
    }
}

int main (){

struct horario horarios[5];

lerHorario(horarios);
mostrarHorarios(horarios);

return 0;
}
