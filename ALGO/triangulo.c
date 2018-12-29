#include <stdio.h>
#include <stdlib.h>

int main(){
   int entrada, i, ii;
   printf("digite o n do triângulo \n");
   scanf("%i", &entrada);
   // Vai imprimir até a linha central do triângulo
   for(i = 1; i <=entrada; i++){
     for(ii = 1; ii <= i; ii++){
       printf("*");
     }
     printf("\n");
   }
   // Vai imprimir após a linha central até a última, por isso -1 em entrada
   for(i = entrada -1; i >= 1; i--){
     for(ii = 1; ii <= i; ii++){
       printf("*");
     }
     printf("\n");
   }

return 0;
}
