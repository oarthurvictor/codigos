#include <stdio.h>

void media (float *a, float *b, float *c){
*c = (*a+*b)/2;
}

void main()
 {
   float nota1, nota2, resultado;
   printf("Insira sua nota: ");
   scanf("%f", &nota1);
   printf("Insira sua outra nota: ");
   scanf("%f", &nota2);
   media(&nota1,&nota2, &resultado);
   printf("\nA media eh: %.2f\n", resultado);
 }

