#include <stdio.h>
#include <stdlib.h>

 int somaExp(int expoente){
int resultado;
if (expoente == 0){
	return 1;
}else
	return (resultado = resultado * 2 * (expoente-1);
}

int main(){

int n, resultado = 0;

printf("Digite um expoente: ");
scanf ("%d", &n);

resultado = somaExp(n);

printf("%d\n", resultado);

}