#include <stdio.h>
#include <stdlib.h>

/* Estrutura para �rvore com valores char */
typedef struct arvore {
       char    conteudo;
       struct arvore *esq;
       struct arvore *dir;
} Arvore;

/* Estrutura para �rvore bin�ria de busca com valores inteiros */
typedef struct arvoreInt {
       int    conteudo;
       struct arvore *esq;
       struct arvore *dir;
} ArvoreInt;

/* Cria uma �rvore vazia */
Arvore* criaArvoreVazia (void){

   return NULL; /* A �rvore � representada pelo endere�o do n� raiz */
                /* Uma �rvore vazia � representada pelo valor NULL */

}

/* Checa se a �rvore � vazia */
int arvoreVazia (Arvore * a)
{
    if (a == NULL)
        return 1;
    else
        return 0;
}

/* Cria uma �rvore n�o vazia com os valores dos ponteiros da esquerda e direita  */
Arvore* criaArvore (char c, Arvore* e, Arvore* d){

   Arvore* no = (Arvore *) malloc (sizeof(Arvore));
   if (no == NULL)
      exit(0);
   no->conteudo = c;
   no->esq = e;
   no->dir = d;

   return no;

}

/* Insere valores na �rvore bin�ria de busca*/

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
 /* � necess�rio atualizar os ponteiros para as sub-�rvores � esquerda ou � direita quando da
chamada recursiva da fun��o, pois a fun��o de inser��o pode alterar o valor do ponteiro
para a raiz da (sub-)�rvore.*/

}



/* Percorre a �rvore e verifica se um caractere 'c' pertence a um dos n�s de uma dada �rvore*/
int pertence (Arvore* a, char c){

    if (a == NULL)
         return 0; /* �rvore vazia! */
    else if (a->conteudo == c)
            return 1;
         else if (pertence(a->esq,c))
            return 1;
         else if (pertence(a->dir,c))
            return 1;

}

/* Percorre a �rvore imprindo seus n�s raiz-esquerda-direita (r-e-d)*/
void imprimeArvore (Arvore* a){

    if (a != NULL) {
       printf("%c, ", a->conteudo);
       imprimeArvore(a->esq);
       imprimeArvore(a->dir);
    }


}

/* Percorre a �rvore imprindo seus n�s raiz-esquerda-direita (r-e-d)*/
void imprimeArvoreInt (ArvoreInt* r){

    if (r != NULL) {
       printf("%d, ", r->conteudo);
       imprimeArvoreInt(r->esq);
       imprimeArvoreInt(r->dir);
    }


}

/* Altura ou profundidade de uma �rvore: � o m�ximo n�vel de seus n�s.
   � o n�mero de n�s do maior caminho (da raiz at� a folha).  */
/* Retorna a altura da �rvore bin�ria dada sua raiz a. */

int altura (Arvore* a) {
   if (a == NULL)
      return -1; // �rvore vazia
   else {
      int he = altura (a->esq);
      int hd = altura (a->dir);
      if (he < hd) return hd + 1;
      else return he + 1;
   }
}

/* Libera a mem�ria alocada pela estrutura da �rvore, ou seja, 'poda' a �rvore */
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
/* Apresenta��o do menu de op��o */
int menu(){

  int opcao;

    printf("\n\n ==== MENU DE OPCOES ====\n");
    printf("0 - SAIR \n");
    printf("1 - �rvore Est�tica de Caracteres \n");
    printf("2 - �rvore Din�mica de Inteiros \n");
    printf("3 - Altura da �rvore Est�tica \n");
    scanf("%d", &opcao);

    return opcao;

}



main()
{
 // Arvore* a = criaArvoreVazia (); /* a � uma �rvore vazia, ou seja, um ponteiro para uma �rvore vazia */

    int opcao = menu();
    Arvore* a;

    switch(opcao) {

       case 1: //�rvore Est�tica
            printf("Escolhi a opcao 1. \n");
            a =  criaArvoreEstatica();
            printf("\nSolicitando a impress�o da �rvore (r-e-d): \n");
            imprimeArvore (a);

            char letra;
            printf("\nDigite um caracter que deseja buscar na �rvore: ");
            scanf("%s", &letra);

            if (pertence(a, letra) ==1)
                printf("%c pertence a �rvore.\n", letra);
            else
                printf("%c n�o pertence a �rvore. \n", letra);

            break;

       case 2: //�rvore din�mica
            printf("Escolhi a opcao 2. \n");
            ArvoreInt *r = NULL;
            printf("Digite inteiros positivos para os n�s da �rvore. ");
            printf("Zero quando n�o desejar inserir mais n�s.   \n\n");
            int n;
            scanf("%d", &n);
            while(n > 0){
                r = insereArvoreBB(r,n);
                scanf("%d", &n);
            }
            printf("\nSolicitando a impress�o da �rvore (r-e-d): \n");
            imprimeArvoreInt(r);

        case 3: //Altura da �rvore est�tica
            a = criaArvoreEstatica();
            imprimeArvore (a);
            int h = altura(a);
            printf("\nAltura � %d: \n", h);

}

return 0;
}
