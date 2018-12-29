#include <stdio.h>
#include <stdlib.h>

typedef struct node {
       int    conteudo;
       struct node *prox;
} node;

node *cria_lista(){
    node *novo = (node *) malloc(sizeof(node)); /*Aloca memória para o nó*/
    if(novo == NULL) exit(0);                   /*Se não houver espaço sai*/
    novo->prox = NULL;
    return (novo);
}

void inserirInicio(node *lista, int numero){
    node *novo = (node *) malloc(sizeof(node));
    if(novo == NULL) exit(0);
    novo->conteudo = numero;
    novo->prox = lista->prox;
    lista->prox = novo;
}

int removerFim(node *lista){
    int num;
    node *ult, *penult;
    ult    = lista->prox;
    penult = lista;
    while(ult->prox != NULL){
            penult = ult;
            ult = ult->prox;
    }
    num = ult->conteudo;
    penult->prox = NULL;
    free(ult);   //Libera memória alocada
    return(num);
}

void imprime(node *lista)
{
        node *aux;
        aux = lista->prox;
        while(aux != NULL){
             printf("%5d", aux->conteudo);
             aux = aux->prox;
        }
        printf("\n\n");
}

int removerInicio(node *lista){
    node *aux;
    int num;
    aux = lista->prox;
    num = aux->conteudo;
    lista->prox = aux->prox;
    free(aux);   //Libera memória alocada
    return(num);
}

/*bool testarLista(node *lista){
return (lista->prox == NULL);
}*/

void main(void){
   node *lista;
    int num;
    int num1=11;
    int num2=22;
    int num3=33;
    int num4=44;
    lista = cria_lista();
    inserirInicio(lista, num1);
    inserirInicio(lista, num2);
    inserirInicio(lista, num3);
    inserirInicio(lista, num4);
    imprime(lista);
    num = removerInicio(lista);
    printf("Removido: %d\n", num);
    imprime(lista);
    num = removerFim(lista);
    printf("Removido: %d\n", num);
    imprime(lista);
}
