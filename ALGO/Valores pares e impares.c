#include<stdio.h>
#include<stdlib.h>

int main (){
    int valor, i;
    int qtdpares=0, qtdimpares=0, qtdpos=0, qtdneg=0;

    for(i=0;i<5;i++){
    printf("\n Digite um numero:");
    scanf("%d", &valor);
        if (valor>0){
        qtdpos=qtdpos+1;  //positivo

    }       else{
            qtdneg=qtdneg+1;  //negativo
    }
        if (valor%2==0){
        qtdpares=qtdpares+1;  //pares
    }       else{
            qtdimpares=qtdimpares+1;  //impares

    } //fim if
    }  //fim for
    printf("\nExiste %i valores pares", qtdpares);
    printf("\nExiste %i valores impares", qtdimpares);
    printf("\nExiste %i valores positivo", qtdpos);
    printf("\nExiste %i valores negativo", qtdneg);







    return 0;

} //fim main
