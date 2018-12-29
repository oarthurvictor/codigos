#include <stdio.h>
#include<stdbool.h>

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

bool testarLista(node *lista){
return (lista->prox == NULL);
}

void main(void){
     node *lista;
     lista = cria_lista();
     if (testarLista(lista))
        printf("Vazia");
     else
        printf("Nao vazia");
}

