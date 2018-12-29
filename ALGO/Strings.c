#include <stdio.h>

int main (){

    char str[10] = "Joao";
    printf("\n\nString: %s", str);
    printf("\n\nSegunda letra %c", str[1]);
    str[1] = 'U';
    printf("\n\nAgora a segunda letra e: %c", str[1]);
    printf("\n\nString resultante %s", str);

    return 0;
}
