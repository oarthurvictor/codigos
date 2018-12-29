#include <stdio.h>
int main()
  {
    char letra = 's';
    int  numero = 35;
    printf("Exibindo o endereço de memória de variáveis:\n\n");
    printf("Variável letra  = %c, endereço = %p\n",letra, &letra);
    printf("Variável numero = %d, endereço = %p\n",numero,&numero);
  }

