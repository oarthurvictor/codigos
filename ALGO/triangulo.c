#include <stdio.h>
#include <stdlib.h>

int main(){
   int entrada, i, ii;
   printf("digite o n do tri�ngulo \n");
   scanf("%i", &entrada);
   // Vai imprimir at� a linha central do tri�ngulo
   for(i = 1; i <=entrada; i++){
     for(ii = 1; ii <= i; ii++){
       printf("*");
     }
     printf("\n");
   }
   // Vai imprimir ap�s a linha central at� a �ltima, por isso -1 em entrada
   for(i = entrada -1; i >= 1; i--){
     for(ii = 1; ii <= i; ii++){
       printf("*");
     }
     printf("\n");
   }

return 0;
}
