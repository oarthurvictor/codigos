#include <stdio.h>
#include <stdlib.h>


int main (){

   int matriz [4][4]= {{4,6,8,10},{12,10,9,1},{2,3,4,5},{6,7,8,9}};
   int i, j, p=0, s=0, dp[4], ds[4];
   int somap=0, somas=0;

   for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("%d\t", matriz[i][j]);
        if (i==j){
            dp [p]=matriz[i][j];
            p++;
        }
        if (i+j==3){
            ds[s]=matriz[i][j];
            s++;
        }
        if (j>i){
            somap+= matriz[i][j];
        }
        if (i+j>3)
            somas+=matriz[i][j];
        }
        printf("\n");
    }
    printf("%d = somap\n", somap);
    printf("%d = somas\n", somas);

    for (i=0;i<4;i++){
        printf("%d ", dp[i]);
    }
    printf("\n");
    for (i=0;i<4;i++){
        printf("%d ", ds[i]);
    }

return 0;
}
