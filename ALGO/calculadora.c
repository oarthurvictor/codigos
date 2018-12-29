#include <stdio.h>
#include<stdlib.h>

int i, qtd;
float num[10], resultado;

float soma (){
    resultado = num[0]+num[1];
    for (i=0;i<qtd;i++){
            resultado+=num[i];
    }
    printf("\nO resultado eh %.2f", resultado);
return resultado;
}

int subtracao (){
    resultado = num[0]-num[1];
    for (i=2;i>qtd;i--){
        resultado-=num[i];
    }
    printf("\nO resultado eh %.2f", resultado);
return resultado;
}

float multiplicacao (){
    resultado = num[0]*num[1];
    for (i=2;i>qtd;i++){
            resultado= resultado*num[i];
    }
    printf("\nO resultado eh %.2f", resultado);
return resultado;
}

float divisao (){
    resultado=num[0]/num[1];
    if (num[1] != 0)
        printf("\nO resultado eh: %.2f", resultado);
    else
        printf ("\nNumero nao pode ser divisivel por 0");

    return resultado;
}

void menu (){
    int oper;
printf("\n----- Calculadora -----\n");
printf ("Escolha 1 para somar\n");
printf ("Escolha 2 para subtrair\n");
printf ("Escolha 3 para multiplicar\n");
printf ("Escolha 4 para dividir\n");
printf ("Escolha 0 para sair\n");
printf("\nEscolha a operacao: ");
scanf("%d", &oper);

    switch (oper){
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao ();
            break;
        case 4:
            divisao ();
            break;
        default:
            printf("\nAte a proxima!\n");
}
}

int pegarNum (){
printf("Informe quantos numeros sera usado na operacao: ");
scanf("%d", &qtd);
for (i=0;i<qtd;i++){
    printf("Digite o %d numero: ", i+1);
    scanf("%f", &num[i]);
}
}

int main (){
    pegarNum();
    menu();

return 0;
}
