#include <stdio.h>
void Strcat(char *s1, char *s2);
void main ()
{
  char string1[20]="Brasil", string2[20]="2014";
  Strcat(string1, string2); /*Os argumentos são ponteiros para as strings*/
  printf("Strings concatenadas: %s\n", string1);
}
void Strcat(char *s1, char *s2)
{
    int i, j;
  for (i=0; *s1 != '\0'; s1++);
  for (j=0; *s2 != '\0'; s1++, s2++)
     *s1=*s2;
}
