#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, x=0;

    for (i=0;i<=1000;i=i+2){
        x = i*i;
        printf("%d\n", x);
    }

return 0;
system("pause");
}
