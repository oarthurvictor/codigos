#include <stdio.h>

int main (){
    int valor1, valor2, soma, i;

    printf("Digite dois valores: ");
    scanf("%d %d", &valor1, &valor2);

    for (i=1; i<= valor1 && i<=valor2; i=i+2){
        printf("%d", i);
    }//fimfor
return (0);
}
