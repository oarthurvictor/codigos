#include <stdio.h>
#include <stdlib.h>

// Calcular o fatorial
int main(){
    int num, fat=1, i;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    for (i=num;i>1;i--){
        fat = fat * i;
    }
    printf("\n\nO fatorial de %d e %d", num, fat);


    return 0;


}
