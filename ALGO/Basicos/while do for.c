#include <stdio.h>

main (){
  int num;

  printf("usando WHILE\n");
  num = 1;
  while (num < 10){
    printf("Numero = %d\n", num);
    num++;
  }

  printf("Usando DO-WHILE\n");
  num = 1;
  do {
    printf("numero = %d\n", num);
    num++;
  }while (num <=5);

  printf("Usando FOR\n");
  for (num=1;num <=5;num++){
    printf("numero = %d\n", num);
  }

printf("\n\n");
return (0);
}
