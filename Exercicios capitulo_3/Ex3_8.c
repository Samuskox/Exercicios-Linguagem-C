#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Forneca um numero menor ou igual a zero: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("numero incorreto(valor positivo)");
    } else {
        for(int i = 0; i >= numero; i--){
            printf(" %d ", i);
        }
    }

    return 0;

}