#include <stdio.h>



void somar (float *a, float *b){
media = (*a+*b)/2;
}

/*void calcMedia(int *y){
   *y/2;
   printf("Valor de y= %d\n", *y);
}*/
 void main()
 {
   float nota1, nota2, media;
   printf("Insira sua nota: ");
   scanf("%f", &nota1);
   printf("Insira sua outra nota: ");
   scanf("%f", &nota2);
   somar(&nota1,&nota2);
   printf("A media eh: %.2f", media);
 }

