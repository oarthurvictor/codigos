#include<stdio.h>

typedef struct carro
{
    char modelo[30];
    float potenciaMotor;
    int anoFabricacao,
        numPortas;
}CARRO;

void Exibe (CARRO car){
    printf ("Modelo do carro: %s\n", car.modelo);
    printf ("Potencia do motor: %.2f\n", car.potenciaMotor);
    printf ("Ano de fabricacao: %d\n", car.anoFabricacao);
    printf ("Quantidade de portas: %d\n", car.numPortas);
}


int main (){
    CARRO fusca = {"Fuscao preto", 1.5, 78, 2};
    Exibe (fusca);
}
