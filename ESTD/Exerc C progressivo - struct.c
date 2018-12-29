#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nomeBanda[100];
    char tipoMusical[20];
    int integrantes;
    int posicaoRanking;
}Bandas;


int main(){

Bandas preencher[5], *pBanda;
pBanda = preencher;

//Preenchendo a estrutura.
int i;
for (i=0;i<3;i++){
    printf("Banda %d\n", i+1);
    printf("Nome da Banda: \n");
    scanf("%s", pBanda->nomeBanda);
    printf("Estilo Musical: \n");
    scanf("%s", pBanda->tipoMusical);
    printf("Numero de Integrantes: \n");
    scanf("%d", &pBanda->integrantes);
    printf("Posicao no Ranking: \n");
    scanf("%d", &pBanda->posicaoRanking);
    printf("\n");
    ++pBanda;
};
//Mostrando a estrutura.
for (i=0;i<3;i++){
    printf("Banda %d: %s\n", i+1, preencher[i].nomeBanda);
    printf("Estilo Musical: %s \n", preencher[i].tipoMusical);
    printf("Numeros de Integrantes: %d\n", preencher[i].integrantes);
    printf("Posicao no Ranking: %d \n", preencher[i].posicaoRanking);
    printf("\n");
}

    int num;
    printf("Informe uma posicao: \n");
    scanf("%d", &num);
    switch (num){
    case 1:
    printf("Banda: %s\n", preencher[0].nomeBanda);
    printf("Estilo Musical: %s \n", preencher[0].tipoMusical);
    printf("Numeros de Integrantes: %d\n", preencher[0].integrantes);
    printf("Posicao no Ranking: %d \n", preencher[0].posicaoRanking);
    break;
    case 2:
    printf("Banda: %s\n", preencher[1].nomeBanda);
    printf("Estilo Musical: %s \n", preencher[1].tipoMusical);
    printf("Numeros de Integrantes: %d\n", preencher[1].integrantes);
    printf("Posicao no Ranking: %d \n", preencher[1].posicaoRanking);
    break;
    case 3:
    printf("Banda: %s\n", preencher[2].nomeBanda);
    printf("Estilo Musical: %s \n", preencher[2].tipoMusical);
    printf("Numeros de Integrantes: %d\n", preencher[2].integrantes);
    printf("Posicao no Ranking: %d \n", preencher[2].posicaoRanking);
    break;


return 0;
}

void funcaoEscolha(){

    }
}

/*Crie uma função que peça ao usuário um número de 1 até 5.
Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário.*/
