#include <stdio.h>
int main()
  {
    char letra = 's';
    int  numero = 35;
    printf("Exibindo o endere�o de mem�ria de vari�veis:\n\n");
    printf("Vari�vel letra  = %c, endere�o = %p\n",letra, &letra);
    printf("Vari�vel numero = %d, endere�o = %p\n",numero,&numero);
  }

