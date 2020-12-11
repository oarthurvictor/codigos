#include <stdio.h>
#include <stdlib.h>

int main (){

    char frase[80]= " A linguagem C nasceu na decada de 1970. Seu inventor foi Dennis Ritchie.";
    int i, tam, cont=0;

    tam = strlen(frase);
    strupr(frase);

    for (i=0;i<tam;i++){
        char espaco = frase[i];
        if (frase[i] == ' '){
            cont++;
        }
    }

    printf("\nA %d palavras\n", cont);

return 0;
}
