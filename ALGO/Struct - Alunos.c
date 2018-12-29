#include<stdio.h>
#include<stdlib.h>


int main (){


    typedef struct {
        char nome [30];
        float media, matematica, fisica;
    }Aluno;

    Aluno alunos[5];

    int i;

    for (i=0;i<5;i++){
        printf ("\nNome do Aluno %d: ", i+1);
        gets (alunos[i].nome);

        printf ("Nota de Matematica: ");
        scanf("%f", &alunos[i].matematica);

        printf ("Nota de fisica: ");
        scanf("%f", &alunos[i].fisica);
        getchar();

        alunos[i].media=(alunos[i].matematica+alunos[i].fisica)/2;
    }

    for (i=0;i<5;i++){
        printf ("\nAluno %d\n", i+1);
        printf ("Nome: %s\n", alunos[i].nome);
        printf ("Media: %.2f\n", alunos[i].media);
    }


return 0;
}
