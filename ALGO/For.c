#include<stdio.h>
#include<stdlib.h>

    int main (){
        int soma=0, num, i;  //pode declarar e inicializar a variavel

    for (i=0;i<10;i++){ //for (inicializa��o;condi��o parada; incrementa) // (Variavel ++) -> (Variavel=variavel+1)
        printf("\nDigite um numero %d: ",i+1);
        scanf("%d",&num);
        soma = soma + num; //soma += num

    }//fim for
    printf ("\n \nSoma = %d",soma);
    return 0;

}
