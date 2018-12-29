#include <stdio.h>
#include <stdlib.h>

/* Estrutura para árvore com valores char */
typedef struct arvore {
       char    conteudo;
       struct arvore *esq;
       struct arvore *dir;
} Arvore;

/* Estrutura para árvore binária de busca com valores inteiros */
typedef struct arvoreInt {
       int    conteudo;
       struct arvore *esq;
       struct arvore *dir;
} ArvoreInt;

/* Cria uma árvore vazia */
Arvore* criaArvoreVazia (void){

   return NULL; /* A árvore é representada pelo endereço do nó raiz */
                /* Uma árvore vazia é representada pelo valor NULL */

}

/* Checa se a árvore é vazia */
int arvoreVazia (Arvore * a)
{
    if (a == NULL)
        return 1;
    else
        return 0;
}

/* Cria uma árvore não vazia com os valores dos ponteiros da esquerda e direita  */
Arvore* criaArvore (char c, Arvore* e, Arvore* d){

   Arvore* no = (Arvore *) malloc (sizeof(Arvore));
   if (no == NULL)
      exit(0);
   no->conteudo = c;
   no->esq = e;
   no->dir = d;

   return no;

}

/* Insere valores na árvore binária de busca*/

ArvoreInt * insereArvoreBB (ArvoreInt * a, int num) {
 if (a == NULL) {
    a = (ArvoreInt *)malloc(sizeof(ArvoreInt *));

    a->conteudo = num;
    a->esq = a->dir = NULL;
 }
 else if (num < a->conteudo)
    a->esq = insereArvoreBB(a->esq,num);
 else
    a->dir = insereArvoreBB(a->dir,num);

 return a;
 /* é necessário atualizar os ponteiros para as sub-árvores à esquerda ou à direita quando da
chamada recursiva da função, pois a função de inserção pode alterar o valor do ponteiro
para a raiz da (sub-)árvore.*/

}



/* Percorre a árvore e verifica se um caractere 'c' pertence a um dos nós de uma dada árvore*/
int pertence (Arvore* a, char c){

    if (a == NULL)
         return 0; /* Árvore vazia! */
    else if (a->conteudo == c)
            return 1;
         else if (pertence(a->esq,c))
            return 1;
         else if (pertence(a->dir,c))
            return 1;

}

/* Percorre a árvore imprindo seus nós raiz-esquerda-direita (r-e-d)*/
void imprimeArvore (Arvore* a){

    if (a != NULL) {
       printf("%c, ", a->conteudo);
       imprimeArvore(a->esq);
       imprimeArvore(a->dir);
    }


}

/* Percorre a árvore imprindo seus nós raiz-esquerda-direita (r-e-d)*/
void imprimeArvoreInt (ArvoreInt* r){

    if (r != NULL) {
       printf("%d, ", r->conteudo);
       imprimeArvoreInt(r->esq);
       imprimeArvoreInt(r->dir);
    }


}

/* Altura ou profundidade de uma árvore: É o máximo nível de seus nós.
   É o número de nós do maior caminho (da raiz até a folha).  */
/* Retorna a altura da árvore binária dada sua raiz a. */

int altura (Arvore* a) {
   if (a == NULL)
      return -1; // Árvore vazia
   else {
      int he = altura (a->esq);
      int hd = altura (a->dir);
      if (he < hd) return hd + 1;
      else return he + 1;
   }
}

/* Libera a memória alocada pela estrutura da árvore, ou seja, 'poda' a árvore */
Arvore* liberaArvore (Arvore* a){

    if (a != NULL){
       liberaArvore (a->esq); /* libera lado esquerdo */
       liberaArvore (a->dir); /* libera lado direito */
       free(a);               /* libera raiz */
    }
    return NULL;

}

Arvore* criaArvoreEstatica(){

    Arvore* a1 = criaArvore ('d', criaArvoreVazia(), criaArvoreVazia());
    Arvore* a2 = criaArvore ('b', criaArvoreVazia(), a1);
    Arvore* a3 = criaArvore ('e', criaArvoreVazia(), criaArvoreVazia());
    Arvore* a4 = criaArvore ('f', criaArvoreVazia(), criaArvoreVazia());
    Arvore* a5 = criaArvore ('c', a3, a4);
    Arvore* a =  criaArvore ('z', a2, a5);

    return a;

}
/* Apresentação do menu de opção */
int menu(){

  int opcao;

    printf("\n\n ==== MENU DE OPCOES ====\n");
    printf("0 - SAIR \n");
    printf("1 - Árvore Estática de Caracteres \n");
    printf("2 - Árvore Dinâmica de Inteiros \n");
    printf("3 - Altura da árvore Estática \n");
    scanf("%d", &opcao);

    return opcao;

}



main()
{
 // Arvore* a = criaArvoreVazia (); /* a é uma árvore vazia, ou seja, um ponteiro para uma árvore vazia */

    int opcao = menu();
    Arvore* a;

    switch(opcao) {

       case 1: //Árvore Estática
            printf("Escolhi a opcao 1. \n");
            a =  criaArvoreEstatica();
            printf("\nSolicitando a impressão da árvore (r-e-d): \n");
            imprimeArvore (a);

            char letra;
            printf("\nDigite um caracter que deseja buscar na árvore: ");
            scanf("%s", &letra);

            if (pertence(a, letra) ==1)
                printf("%c pertence a árvore.\n", letra);
            else
                printf("%c não pertence a árvore. \n", letra);

            break;

       case 2: //Árvore dinâmica
            printf("Escolhi a opcao 2. \n");
            ArvoreInt *r = NULL;
            printf("Digite inteiros positivos para os nós da árvore. ");
            printf("Zero quando não desejar inserir mais nós.   \n\n");
            int n;
            scanf("%d", &n);
            while(n > 0){
                r = insereArvoreBB(r,n);
                scanf("%d", &n);
            }
            printf("\nSolicitando a impressão da árvore (r-e-d): \n");
            imprimeArvoreInt(r);

        case 3: //Altura da árvore estática
            a = criaArvoreEstatica();
            imprimeArvore (a);
            int h = altura(a);
            printf("\nAltura é %d: \n", h);

}

return 0;
}
