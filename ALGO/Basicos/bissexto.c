#include<studio.h>
#include<stdlib.h>

//Validar ano bisexto
int main (){
    int ano;

    printf("\nDigite um ano: ");
    scanf ("%d",&ano);

    if(ano%100==0){
        if(ano%400==0){
            printf("\n%d eh bissexto!", ano);
        }else{
            printf("/n%d n�o � bissexto!", ano);

        }
    }else{
        if(ano%4==0)
            printf("\n%d � bissexto!", ano);
        else
            printf("\n%d n�o � bissexto!", ano);
    }
    return 0;
}
