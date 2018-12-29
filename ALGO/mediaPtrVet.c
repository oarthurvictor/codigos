#include <stdio.h>

void media (float *vetor, float *b){
*b = (*vetor+*(vetor+1)+*(vetor+2)+*(vetor+3)+*(vetor+4))/5;
}

void main(){

   float resultado, notas[5]={10,10,10,10,5};

   media(notas, &resultado);

   printf("Sua media eh: %.2f\n", resultado);
 }
